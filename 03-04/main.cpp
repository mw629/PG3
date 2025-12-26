#include <stdio.h>

class IShape {
protected:

	float size_;
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;
};

class Circle :public IShape {
private:
	float radius = 2.0f;
public:
	void Size()override { size_ = radius * radius * 3.14f; };
	void Draw() override { printf("Circle:%f\n", size_); }
};

class Rectangle :public IShape {
	float width_ = 2.0f;
	float height_ = 1.0f;
public:
	void Size()override { size_ = width_ * height_; };
	void Draw()override { printf("Rectangle:%f\n", size_); }
};

int main() {

	IShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();


	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}
	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}



	return 0;
}