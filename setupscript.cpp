#include<iostream>
#include<string>

const std::string drivers[]={
    "xf86-video-qxl",
    "xf86-video-amdgpu",
    "xf86-video-intel",
    "nvidia nvidia-utils"
};
int main(void){
    short choice=-1;
    std::string input;
    while(choice<0||choice>3){
        system("clear");
        std::cout << "VM(0), AMD(1), INTEL(2) or NVIDIA(3): ";
        std::cin >> choice;
        std::cin.ignore();
    }
    input="sudo pacman -Syu zsh xorg xorg-xinit alacritty bspwm sxhkd nitrogen picom chromium dmenu lxsession neovim "+drivers[choice];
    std::cout<<input<<std::endl;
    system("sleep 5");
    system(input.c_str());

    printf("We done bruv.\n\n");

    return 0;
}
