double static d;

int main(void) {
    // Make sure static doubles are initialized to 0 if no initializer is provided
    return !d;
}