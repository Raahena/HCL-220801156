#include <vector>
#include <memory>

class Media {
public:
    virtual void play() {
        cout << "Playing generic media\n";
    }

    virtual ~Media() { 
        cout << "Media destroyed\n";
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing audio\n";
    }

    ~Audio() {
        cout << "Audio destroyed\n";
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing video\n";
    }

    ~Video() {
        cout << "Video destroyed\n";
    }
};