extern "C" void inpute();

void inpute()

{

int inp1, inp2;

std::cin >> inp1 >> inp2;

std::cout << "first input: " << inp1 << std::endl << "second input: " << inp2 << std::endl;

}

asm(

"callq inpute\n"

);
