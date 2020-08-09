# Base image.
FROM nvidia/opengl:1.0-glvnd-devel-ubuntu18.04

# Non-interactive mode.
ARG DEBIAN_FRONTEND=noninteractive

# Install base packages.
RUN apt-get update && apt-get install -y \
  build-essential \
  clang-format \
  cmake \
  g++ \
  make \
  ninja-build \
  libglfw3-dev \
  libx11-dev \
  libgl1-mesa-dev \
  libglew-dev \
  libglu1-mesa-dev \
  libxcursor-dev \
  libxext-dev \
  libxrandr-dev \
  libxi-dev \
  libxinerama-dev \
  python-dev \
  python3-dev \
  python3-pip

# Install dev packages.
RUN apt-get update && apt-get install -y \
  cloc \
  curl \
  fish \
  git \
  htop \
  tmux \
  tree \
  vim \
  wget \
  zip
