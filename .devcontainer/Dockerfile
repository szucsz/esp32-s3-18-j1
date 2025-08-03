FROM espressif/idf-rust:esp32s3_1.87.0.0

USER root
RUN apt update \
    && apt install -y build-essential llvm clang cmake sudo libsdl2-dev libffi-dev libssl-dev \
    && echo "esp ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers \
    && apt-get clean -y && rm -rf /var/lib/apt/lists/* /tmp/library-scripts

USER esp
WORKDIR /workspaces
