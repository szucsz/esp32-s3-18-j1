use std::path::PathBuf;
use std::env;

fn main() {
    let out = &PathBuf::from(env::var_os("OUT_DIR").unwrap());
    println!("cargo:rustc-link-search={}", out.display());

    let memory_x = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap()).join("memory.x");
    println!("cargo:rustc-link-arg=-T{}", memory_x.display());
}
