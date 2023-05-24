#pragma once
int main(void) {
	Transport t;
	t.setTank(100);

	Transport* pt = new Transport();
	pt->setTank(100);

	delet pt;

	return;
}