FROM espressif/idf:v5.1

RUN apt-get update && apt-get install -y curl build-essential

RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
ENV PATH="/root/.cargo/bin:${PATH}"

RUN rustup install nightly && \
    rustup default nightly && \
    rustup component add rust-src && \
    cargo install espup && \
    espup install --esp-idf-version v5.1 && \
    . "/root/export-esp.sh"

ENV ESP_IDF_VERSION="v5.1" \
    ESP_ARCH="xtensa-esp32s3-espidf" \
    PATH="/root/.cargo/bin:/root/.espressif/tools/xtensa-esp32s3-elf/esp-2022r1-11.2.0/xtensa-esp32s3-elf/bin:${PATH}"

WORKDIR /workspace
