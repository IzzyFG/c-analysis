# C Programming and Analysis

Materials used during the CU Cyber beginner night lesson on C programming and
analysis.

## To Download via wget

Download a zip file

``` console
wget https://github.com/CUCTF/c-analysis/archive/main.zip \
-O "c-analysis-main.zip" && \
unzip ./"c-analysis-main.zip" && \
rm ./"c-analysis-main.zip"
```

Download a tar file

``` console
wget https://github.com/CUCTF/CCDC/archive/main.tar.gz \
-O "CCDC-main.tar.gz" && \
tar -xzvf ./"CCDC-main.tar.gz" && \
rm ./"CCDC-main.tar.gz"

```

## Install GDB

On Debian based Linux distros

```console
sudo apt-get update
sudo apt-get install libc6-dbg gdb valgrind 
```

On RPM based linux distros

```console
sudo yum check-update
sudo yum install gdb
```
