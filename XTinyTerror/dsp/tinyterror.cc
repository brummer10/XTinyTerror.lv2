// generated from file './/tinyterror.dsp' by dsp2cc:
// Code generated with Faust 2.27.2 (https://faust.grame.fr)

#include "math.h"
#include "orangetinyterror_p1a_table.h"
#include "orangetinyterror_p2_neg_table.h"
#include "orangetinyterror_p2_table.h"

namespace tinyterror {

class Dsp {
private:
	uint32_t fSampleRate;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst5;
	double fConst6;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec2[2];
	double fConst7;
	double fConst8;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec4[2];
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fRec3[6];
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec1[5];
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

public:
	static void clear_state_f_static(Dsp*);
	static void init_static(uint32_t sample_rate, Dsp*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, Dsp*);
	static void del_instance(Dsp *p);
	static void connect_static(uint32_t port,void* data, Dsp *p);
	Dsp() {};
	~Dsp() {};
};


inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec2[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec4[l2] = 0.0;
	for (int l3 = 0; (l3 < 6); l3 = (l3 + 1)) fRec3[l3] = 0.0;
	for (int l4 = 0; (l4 < 5); l4 = (l4 + 1)) fRec1[l4] = 0.0;
}

void Dsp::clear_state_f_static(Dsp *p)
{
	p->clear_state_f();
}

inline void Dsp::init(uint32_t sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = mydsp_faustpower2_f(fConst0);
	fConst2 = (1.87062061563462e-19 * fConst0);
	fConst3 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst2 + 6.3177611273794704e-17)) + 4.2614619572574502e-15)) + 5.4357415765532098e-14)) + 3.7324047949884199e-14);
	fConst4 = (fConst1 / fConst3);
	fConst5 = (7.3997841733150403e-19 * fConst0);
	fConst6 = ((fConst0 * (-5.1505253939226797e-17 - fConst5)) + -5.7652837467168698e-18);
	fConst7 = (9.7782027521957793e-24 * fConst0);
	fConst8 = ((fConst0 * ((fConst0 * ((fConst0 * (-1.8503953969853899e-20 - fConst7)) + -4.8067423888235701e-18)) + 1.02912936725356e-15)) + 8.4067364785325997e-14);
	fConst9 = (3.4651785444141199e-23 * fConst0);
	fConst10 = ((fConst0 * ((fConst0 * ((fConst0 * (-4.3960984791775799e-20 - fConst9)) + -7.8788847931514094e-18)) + 2.3378050272802299e-16)) + 1.4723833324313601e-15);
	fConst11 = (3.4734776398177702e-23 * fConst0);
	fConst12 = (fConst0 * ((fConst0 * ((fConst0 * (fConst11 + 2.5582885956192801e-20)) + 2.6100292700656599e-19)) + -5.4922235416090403e-19));
	fConst13 = (1.95564055043916e-23 * fConst0);
	fConst14 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst13 + 1.23359693132359e-20)) + -9.6134847776471402e-18)) + -2.0582587345071101e-15)) + 5.6044909856884002e-14);
	fConst15 = (6.9303570888282398e-23 * fConst0);
	fConst16 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst15 + 2.9307323194517197e-20)) + -1.57577695863028e-17)) + -4.6756100545604598e-16)) + 9.8158888828757294e-16);
	fConst17 = (6.9469552796355403e-23 * fConst0);
	fConst18 = (fConst0 * ((fConst0 * ((fConst0 * (-1.7055257304128601e-20 - fConst17)) + 5.2200585401313101e-19)) + 1.09844470832181e-18));
	fConst19 = ((fConst0 * ((fConst0 * ((fConst0 * (1.23359693132359e-20 - fConst13)) + 9.6134847776471402e-18)) + -2.0582587345071101e-15)) + -5.6044909856884002e-14);
	fConst20 = ((fConst0 * ((fConst0 * ((fConst0 * (2.9307323194517197e-20 - fConst15)) + 1.57577695863028e-17)) + -4.6756100545604598e-16)) + -9.8158888828757294e-16);
	fConst21 = (fConst0 * ((fConst0 * ((fConst0 * (fConst17 + -1.7055257304128601e-20)) + -5.2200585401313101e-19)) + 1.09844470832181e-18));
	fConst22 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst7 + -1.8503953969853899e-20)) + 4.8067423888235701e-18)) + 1.02912936725356e-15)) + -8.4067364785325997e-14);
	fConst23 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst9 + -4.3960984791775799e-20)) + 7.8788847931514094e-18)) + 2.3378050272802299e-16)) + -1.4723833324313601e-15);
	fConst24 = (fConst0 * ((fConst0 * ((fConst0 * (2.5582885956192801e-20 - fConst11)) + -2.6100292700656599e-19)) + -5.4922235416090403e-19));
	fConst25 = (1.9556405504391598e-24 * fConst0);
	fConst26 = ((fConst0 * ((fConst0 * ((fConst0 * (6.1679846566179701e-21 - fConst25)) + -4.8067423888235701e-18)) + 1.02912936725356e-15)) + -2.8022454928442001e-14);
	fConst27 = (6.9303570888282398e-24 * fConst0);
	fConst28 = ((fConst0 * ((fConst0 * ((fConst0 * (1.4653661597258599e-20 - fConst27)) + -7.8788847931514094e-18)) + 2.3378050272802299e-16)) + -4.9079444414378598e-16);
	fConst29 = (6.94695527963554e-24 * fConst0);
	fConst30 = (fConst0 * ((fConst0 * ((fConst0 * (fConst29 + -8.5276286520642795e-21)) + 2.6100292700656599e-19)) + -5.4922235416090403e-19));
	fConst31 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst25 + 6.1679846566179701e-21)) + 4.8067423888235701e-18)) + 1.02912936725356e-15)) + 2.8022454928442001e-14);
	fConst32 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst27 + 1.4653661597258599e-20)) + 7.8788847931514094e-18)) + 2.3378050272802299e-16)) + 4.9079444414378598e-16);
	fConst33 = (fConst0 * ((fConst0 * ((fConst0 * (-8.5276286520642795e-21 - fConst29)) + -2.6100292700656599e-19)) + -5.4922235416090403e-19));
	fConst34 = (2.5770500354953599e-20 * fConst0);
	fConst35 = ((fConst0 * (-1.7921414749007699e-17 - fConst34)) + -2.6562049427905501e-16);
	fConst36 = (2.4224270333656401e-22 * fConst0);
	fConst37 = ((fConst0 * (-1.5093034601825501e-19 - fConst36)) + -2.2312121519440601e-18);
	fConst38 = (1.6479095465072399e-22 * fConst0);
	fConst39 = (fConst0 * (fConst38 + 2.4968326462231101e-21));
	fConst40 = (7.7311501064860903e-20 * fConst0);
	fConst41 = ((fConst0 * (fConst40 + 1.7921414749007699e-17)) + -2.6562049427905501e-16);
	fConst42 = (1.2112135166828199e-21 * fConst0);
	fConst43 = ((fConst0 * (fConst42 + 4.5279103805476396e-19)) + 2.2312121519440601e-18);
	fConst44 = (8.2395477325362e-22 * fConst0);
	fConst45 = (fConst0 * (-7.4904979386693396e-21 - fConst44));
	fConst46 = (5.1541000709907301e-20 * fConst0);
	fConst47 = ((fConst0 * (3.5842829498015299e-17 - fConst46)) + 5.3124098855811003e-16);
	fConst48 = (2.4224270333656399e-21 * fConst0);
	fConst49 = ((fConst0 * (-3.01860692036509e-19 - fConst48)) + 4.4624243038881203e-18);
	fConst50 = (1.64790954650724e-21 * fConst0);
	fConst51 = (fConst0 * (fConst50 + 4.9936652924462299e-21));
	fConst52 = ((fConst0 * (-3.5842829498015299e-17 - fConst46)) + 5.3124098855811003e-16);
	fConst53 = ((fConst0 * (fConst48 + -3.01860692036509e-19)) + -4.4624243038881203e-18);
	fConst54 = (fConst0 * (4.9936652924462299e-21 - fConst50));
	fConst55 = ((fConst0 * (fConst40 + -1.7921414749007699e-17)) + -2.6562049427905501e-16);
	fConst56 = ((fConst0 * (4.5279103805476396e-19 - fConst42)) + -2.2312121519440601e-18);
	fConst57 = (fConst0 * (fConst44 + -7.4904979386693396e-21));
	fConst58 = ((fConst0 * (1.7921414749007699e-17 - fConst34)) + -2.6562049427905501e-16);
	fConst59 = ((fConst0 * (fConst36 + -1.5093034601825501e-19)) + 2.2312121519440601e-18);
	fConst60 = (fConst0 * (2.4968326462231101e-21 - fConst38));
	fConst61 = (1.0 / fConst3);
	fConst62 = (7.4824824625384702e-19 * fConst0);
	fConst63 = ((fConst0 * ((fConst1 * (-1.2635522254758899e-16 - fConst62)) + 1.0871483153106399e-13)) + 1.49296191799537e-13);
	fConst64 = ((fConst1 * ((1.12237236938077e-18 * fConst1) + -8.5229239145149004e-15)) + 2.2394428769930499e-13);
	fConst65 = ((fConst0 * ((fConst1 * (1.2635522254758899e-16 - fConst62)) + -1.0871483153106399e-13)) + 1.49296191799537e-13);
	fConst66 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst2 + -6.3177611273794704e-17)) + 4.2614619572574502e-15)) + -5.4357415765532098e-14)) + 3.7324047949884199e-14);
	fConst67 = (2.95991366932602e-18 * fConst0);
	fConst68 = (fConst0 * (fConst67 + 1.03010507878454e-16));
	fConst69 = (1.15305674934337e-17 - (4.4398705039890303e-18 * fConst1));
	fConst70 = (fConst0 * (fConst67 + -1.03010507878454e-16));
	fConst71 = ((fConst0 * (5.1505253939226797e-17 - fConst5)) + -5.7652837467168698e-18);
	clear_state_f();
}

void Dsp::init_static(uint32_t sample_rate, Dsp *p)
{
	p->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider1))) + -1.0));
	double fSlow2 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider2))) + -1.0));
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec0[0] = (fSlow0 + (0.99299999999999999 * fRec0[1]));
		fRec2[0] = (fSlow1 + (0.99299999999999999 * fRec2[1]));
		fRec4[0] = (fSlow2 + (0.99299999999999999 * fRec4[1]));
		double fTemp0 = ((fConst0 * (fConst31 + (fRec4[0] * (fConst32 + (fConst33 * fRec4[0]))))) + 5.8427910017117405e-14);
		fRec3[0] = (double(input0[i]) - ((((((fRec3[1] * ((fConst0 * (fConst8 + (fRec4[0] * (fConst10 + (fConst12 * fRec4[0]))))) + 2.9213955008558699e-13)) + (fRec3[2] * ((fConst0 * (fConst14 + (fRec4[0] * (fConst16 + (fConst18 * fRec4[0]))))) + 5.8427910017117398e-13))) + (fRec3[3] * ((fConst0 * (fConst19 + (fRec4[0] * (fConst20 + (fConst21 * fRec4[0]))))) + 5.8427910017117398e-13))) + (fRec3[4] * ((fConst0 * (fConst22 + (fRec4[0] * (fConst23 + (fConst24 * fRec4[0]))))) + 2.9213955008558699e-13))) + (fRec3[5] * ((fConst0 * (fConst26 + (fRec4[0] * (fConst28 + (fConst30 * fRec4[0]))))) + 5.8427910017117405e-14))) / fTemp0));
		fRec1[0] = ((0.29999999999999999 * double(orangetinyterror_p1aclip(double((fConst1 * ((fRec2[0] * ((((((fRec3[0] * (fConst35 + (fConst0 * (fRec4[0] * (fConst37 + (fConst39 * fRec4[0])))))) + (fRec3[1] * (fConst41 + (fConst0 * (fRec4[0] * (fConst43 + (fConst45 * fRec4[0]))))))) + (fRec3[2] * (fConst47 + (fConst0 * (fRec4[0] * (fConst49 + (fConst51 * fRec4[0]))))))) + (fRec3[3] * (fConst52 + (fConst0 * (fRec4[0] * (fConst53 + (fConst54 * fRec4[0]))))))) + (fRec3[4] * (fConst55 + (fConst0 * (fRec4[0] * (fConst56 + (fConst57 * fRec4[0]))))))) + (fRec3[5] * (fConst58 + (fConst0 * (fRec4[0] * (fConst59 + (fConst60 * fRec4[0])))))))) / fTemp0)))))) - (fConst61 * ((((fConst63 * fRec1[1]) + (fConst64 * fRec1[2])) + (fConst65 * fRec1[3])) + (fConst66 * fRec1[4]))));
		double fTemp1 = (fConst4 * (fRec0[0] * (((((fConst6 * fRec1[0]) + (fConst68 * fRec1[1])) + (fConst69 * fRec1[2])) + (fConst70 * fRec1[3])) + (fConst71 * fRec1[4]))));
		output0[i] = FAUSTFLOAT((int(signbit(double(fTemp1))) ? double(orangetinyterror_p2_negclip(double(fTemp1))) : double(orangetinyterror_p2clip(double(fTemp1)))));
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
			fRec3[j0] = fRec3[(j0 - 1)];
		}
		for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
			fRec1[j1] = fRec1[(j1 - 1)];
		}
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, Dsp *p)
{
	p->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN1: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fVslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, Dsp *p)
{
	p->connect(port, data);
}


Dsp *plugin() {
	return new Dsp();
}

void Dsp::del_instance(Dsp *p)
{
	delete p;
}

/*
typedef enum
{
   GAIN1, 
   TONE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace tinyterror
