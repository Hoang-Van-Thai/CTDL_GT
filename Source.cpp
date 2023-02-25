#include<iostream>
#include<string>
using namespace std;
struct BangChamCong
{
	int SoNNCP;
	int SoNNKP;
	int SoNLT;
	string KQCV;
	float LTL;
};
struct NhanVien
{
	string MaNV;
	string TenNV;
	char TTGD;
	int SoCon;
	string TDVH;
	float LuongCB;
	BangChamCong BangCC;

};
struct DSNhanVien
{
	NhanVien DSNV[50];
	BangChamCong BCC[50];
	int n;
};
void NhapThongTinNV(NhanVien &NV)
{
	do 
	{
		rewind(stdin);
		cout << "Nhap ma so nhan vien: ";
		getline(cin, NV.MaNV);
		if (NV.MaNV.length() > 8)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (NV.MaNV.length()>8);
	do
	{
		rewind(stdin);
		cout << "Nhap ten nhan vien: ";
		getline(cin, NV.TenNV);
		if (NV.TenNV.length() > 20)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (NV.TenNV.length() > 20);

	cout << "nhap tinh trang gia dinh (M or S): ";
	cin >> NV.TTGD;
	do
	{
		cout << "Nhap so con cua nhan vien: ";
		cin >> NV.SoCon;
		if (NV.SoCon > 20)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (NV.SoCon > 20);
	do
	{
		rewind(stdin);
		cout << "Nhap trinh do van hoa (C1,C2,C3,DH,CH): ";
		getline(cin, NV.TDVH);
		if (NV.TDVH.length() > 2)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (NV.TDVH.length() > 2);
	do
	{
		cout << "Nhap luong co ban: ";
		cin >> NV.LuongCB;
		if (NV.LuongCB>1000000)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (NV.LuongCB > 1000000);
}
void NhapBangCC(BangChamCong &BangCC)
{
	do
	{
		cout << "nhap so ngay nghi co phep: ";
		cin >> BangCC.SoNNCP;
		if (BangCC.SoNNCP > 28)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}
	} while (BangCC.SoNNCP > 28);
	do
	{
		cout << "nhap so ngay nghi khong phep: ";
		cin >> BangCC.SoNNKP;
		if (BangCC.SoNNKP > 28)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}
	} while (BangCC.SoNNKP > 28);
	do
	{
		cout << "nhap so ngay lam them trong thang: ";
		cin >> BangCC.SoNLT;
		if (BangCC.SoNLT > 28)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}
	} while (BangCC.SoNLT > 28);
	do
	{
		rewind(stdin);
		cout << "Nhap ket qua cong viec ( T,TB,K): ";

		getline(cin,BangCC.KQCV);
		if (BangCC.KQCV.length() > 2)
		{
			cout << "ma so khong hop le!! vui long nhap lai";
		}

	} while (BangCC.KQCV.length() > 2);

}
void XuatThongTinNV(NhanVien& NV)
{
	cout << "\nMa so nhan vien: "<<NV.MaNV;
	cout << "\nTen nhan vien: " << NV.TenNV;
	cout << "\nTinh trang gia dinh: " << NV.TTGD;
	cout << "\nSo con: " << NV.SoCon;
	cout << "\nTrinh do van hoa: " << NV.TDVH;
	cout << "\nLuong co ban: " << NV.LuongCB;
	
}
void XuatBangCC(BangChamCong BangCC)
{
	cout << "\nSo ngay nghi co phep: " << BangCC.SoNNCP;
	cout << "\nSo ngay nghi co phep: " << BangCC.SoNNKP;
	cout << "\nSo ngay lam them: " << BangCC.SoNLT;
	cout << "\nKet qua cong viec: " << BangCC.KQCV;
	cout << "\nLuong thuc linh: " ;
}
void NhapDSNV(DSNhanVien &DS)
{
	for (int i = 0; i < DS.n; i++)
	{
		cout << "\n=========Nhan vien " << i+1 << "========\n";
		NhapThongTinNV(DS.DSNV[i]);
		cout << "\n=========Bang cham cong cua nhan vien " << i + 1 << "========\n";
		NhapBangCC(DS.BCC[i]);
	}
}
void XuatDSNV(DSNhanVien& DS)
{
	for (int i = 0; i < DS.n; i++)
	{
		cout << "\n=========nhan vien " << i + 1 << "========\n";
		XuatThongTinNV(DS.DSNV[i]);
		cout << "\n=========Bang cham cong cua nhan vien " << i + 1 << "========\n";
		XuatBangCC(DS.BCC[i]);
		//cout << "\nLuong thuc linh: " << Tinhluong(DS.DSNV[i]);
	}
}
float Tinhluong(NhanVien NV)
{
	float Luong;
	if ((NV.SoCon > 2) && (NV.TDVH == "CH"))
	{
		Luong = (NV.LuongCB + NV.LuongCB * (5 / 100) + NV.LuongCB * (1 / 10)+(NV.LuongCB*(4/100)*NV.BangCC.SoNLT))-
			(NV.BangCC.SoNNKP*(5/100)*NV.BangCC.SoNNKP);
	}
	else if (NV.SoCon > 2)
	{
		Luong = (NV.LuongCB + NV.LuongCB * (5 / 100) + (NV.LuongCB * (4 / 100) * NV.BangCC.SoNLT)) -
			(NV.BangCC.SoNNKP * (5 / 100) * NV.BangCC.SoNNKP);
	}
	else if (NV.TDVH == "CH")
	{
		Luong = (NV.LuongCB + NV.LuongCB * (1 / 10) +( NV.LuongCB * (4 / 100) * NV.BangCC.SoNLT)) -
			(NV.BangCC.SoNNKP * (5 / 100) * NV.BangCC.SoNNKP);
	}
	else
	{
		Luong = (NV.LuongCB + (NV.LuongCB * (4 / 100) * NV.BangCC.SoNLT)) -
			(NV.BangCC.SoNNKP * (5 / 100) * NV.BangCC.SoNNKP);
	}
	return Luong;
}
void XuatNhanVienX(DSNhanVien DSNV)
{
	int x;
	cout << "Nhap thu tu nhan vien can xem thong tin: ";
	cin >> x;
	XuatThongTinNV(DSNV.DSNV[x]);
}
void menu(DSNhanVien DSNV)
{
	while (true)
	{
		system("cls");
		cout << "\n0.Thoat";
		cout << "\n1.Nhap danh sach nhan vien";
		cout << "\n2.Nhap danh sach nhan vien";
		cout << "\n3.Xem thong tin mot nhan vien";

		int luachon;
		cout << "\nNhap lua chon:";
		cin >> luachon;
		if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			cout << "\nnhap so luong nhan vien: ";
			cin >> DSNV.n;
			NhapDSNV(DSNV);
		}
		else if (luachon == 2)
		{
			XuatDSNV(DSNV);
			system("pause");
		}
		else if (luachon == 3)
		{
			XuatNhanVienX(DSNV);
			system("pause");
		}
	}
}
int main()
{
	DSNhanVien DS;
	menu(DS);

	system("pause");
	return 0;
}