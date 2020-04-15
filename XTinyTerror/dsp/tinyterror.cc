// generated from file '../dkbuild/tinyterror//tinyterror.dsp' by dsp2cc:
// Code generated with Faust 2.15.11 (https://faust.grame.fr)

#include "math.h"
#include "orangetinyterror_p1a_table.h"
#include "orangetinyterror_p2_neg_table.h"
#include "orangetinyterror_p2_table.h"

namespace tinyterror {

class Dsp {
private:
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst2;
	double fConst3;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec2[2];
	double fConst4;
	double fConst5;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec4[2];
	double fConst6;
	double fConst7;
	double fConst8;
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
	double fRec3[6];
	double fConst31;
	double fConst32;
	double fConst33;
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
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fRec1[8];
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
public:
	static void clear_state_f_static(Dsp*);
	static void init_static(uint32_t samplingFreq, Dsp*);
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
	for (int l4 = 0; (l4 < 8); l4 = (l4 + 1)) fRec1[l4] = 0.0;
}

void Dsp::clear_state_f_static(Dsp *p)
{
	p->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = mydsp_faustpower2_f(fConst0);
	fConst2 = (9.0716861748134599e-29 * fConst0);
	fConst3 = (((((((-1.4043955831656401e-23 - fConst2) * fConst0) + -4.8679541970320199e-22) * fConst0) + -4.2074643880681601e-21) * fConst0) + -4.6562662651820899e-22);
	fConst4 = (9.7782027521957793e-24 * fConst0);
	fConst5 = (((((((-1.8503953969853899e-20 - fConst4) * fConst0) + -4.8067423888235701e-18) * fConst0) + 1.02912936725356e-15) * fConst0) + 8.4067364785325997e-14);
	fConst6 = (3.4651785444141199e-23 * fConst0);
	fConst7 = (((((((-4.3960984791775799e-20 - fConst6) * fConst0) + -7.8788847931514094e-18) * fConst0) + 2.3378050272802299e-16) * fConst0) + 1.4723833324313601e-15);
	fConst8 = (3.4734776398177702e-23 * fConst0);
	fConst9 = ((((((fConst8 + 2.5582885956192801e-20) * fConst0) + 2.6100292700656599e-19) * fConst0) + -5.4922235416090403e-19) * fConst0);
	fConst10 = (1.95564055043916e-23 * fConst0);
	fConst11 = (((((((fConst10 + 1.23359693132359e-20) * fConst0) + -9.6134847776471402e-18) * fConst0) + -2.0582587345071101e-15) * fConst0) + 5.6044909856884002e-14);
	fConst12 = (6.9303570888282398e-23 * fConst0);
	fConst13 = (((((((fConst12 + 2.9307323194517197e-20) * fConst0) + -1.57577695863028e-17) * fConst0) + -4.6756100545604598e-16) * fConst0) + 9.8158888828757294e-16);
	fConst14 = (6.9469552796355403e-23 * fConst0);
	fConst15 = ((((((-1.7055257304128601e-20 - fConst14) * fConst0) + 5.2200585401313101e-19) * fConst0) + 1.09844470832181e-18) * fConst0);
	fConst16 = (((((((1.23359693132359e-20 - fConst10) * fConst0) + 9.6134847776471402e-18) * fConst0) + -2.0582587345071101e-15) * fConst0) + -5.6044909856884002e-14);
	fConst17 = (((((((2.9307323194517197e-20 - fConst12) * fConst0) + 1.57577695863028e-17) * fConst0) + -4.6756100545604598e-16) * fConst0) + -9.8158888828757294e-16);
	fConst18 = ((((((fConst14 + -1.7055257304128601e-20) * fConst0) + -5.2200585401313101e-19) * fConst0) + 1.09844470832181e-18) * fConst0);
	fConst19 = (((((((fConst4 + -1.8503953969853899e-20) * fConst0) + 4.8067423888235701e-18) * fConst0) + 1.02912936725356e-15) * fConst0) + -8.4067364785325997e-14);
	fConst20 = (((((((fConst6 + -4.3960984791775799e-20) * fConst0) + 7.8788847931514094e-18) * fConst0) + 2.3378050272802299e-16) * fConst0) + -1.4723833324313601e-15);
	fConst21 = ((((((2.5582885956192801e-20 - fConst8) * fConst0) + -2.6100292700656599e-19) * fConst0) + -5.4922235416090403e-19) * fConst0);
	fConst22 = (1.9556405504391598e-24 * fConst0);
	fConst23 = (((((((6.1679846566179701e-21 - fConst22) * fConst0) + -4.8067423888235701e-18) * fConst0) + 1.02912936725356e-15) * fConst0) + -2.8022454928442001e-14);
	fConst24 = (6.9303570888282398e-24 * fConst0);
	fConst25 = (((((((1.4653661597258599e-20 - fConst24) * fConst0) + -7.8788847931514094e-18) * fConst0) + 2.3378050272802299e-16) * fConst0) + -4.9079444414378598e-16);
	fConst26 = (6.94695527963554e-24 * fConst0);
	fConst27 = ((((((fConst26 + -8.5276286520642795e-21) * fConst0) + 2.6100292700656599e-19) * fConst0) + -5.4922235416090403e-19) * fConst0);
	fConst28 = (((((((fConst22 + 6.1679846566179701e-21) * fConst0) + 4.8067423888235701e-18) * fConst0) + 1.02912936725356e-15) * fConst0) + 2.8022454928442001e-14);
	fConst29 = (((((((fConst24 + 1.4653661597258599e-20) * fConst0) + 7.8788847931514094e-18) * fConst0) + 2.3378050272802299e-16) * fConst0) + 4.9079444414378598e-16);
	fConst30 = ((((((-8.5276286520642795e-21 - fConst26) * fConst0) + -2.6100292700656599e-19) * fConst0) + -5.4922235416090403e-19) * fConst0);
	fConst31 = (2.5770500354953599e-20 * fConst0);
	fConst32 = (((-1.7921414749007699e-17 - fConst31) * fConst0) + -2.6562049427905501e-16);
	fConst33 = (2.4224270333656401e-22 * fConst0);
	fConst34 = (((-1.5093034601825501e-19 - fConst33) * fConst0) + -2.2312121519440601e-18);
	fConst35 = (1.6479095465072399e-22 * fConst0);
	fConst36 = ((fConst35 + 2.4968326462231101e-21) * fConst0);
	fConst37 = (7.7311501064860903e-20 * fConst0);
	fConst38 = (((fConst37 + 1.7921414749007699e-17) * fConst0) + -2.6562049427905501e-16);
	fConst39 = (1.2112135166828199e-21 * fConst0);
	fConst40 = (((fConst39 + 4.5279103805476396e-19) * fConst0) + 2.2312121519440601e-18);
	fConst41 = (8.2395477325362e-22 * fConst0);
	fConst42 = ((-7.4904979386693396e-21 - fConst41) * fConst0);
	fConst43 = (5.1541000709907301e-20 * fConst0);
	fConst44 = (((3.5842829498015299e-17 - fConst43) * fConst0) + 5.3124098855811003e-16);
	fConst45 = (2.4224270333656399e-21 * fConst0);
	fConst46 = (((-3.01860692036509e-19 - fConst45) * fConst0) + 4.4624243038881203e-18);
	fConst47 = (1.64790954650724e-21 * fConst0);
	fConst48 = ((fConst47 + 4.9936652924462299e-21) * fConst0);
	fConst49 = (((-3.5842829498015299e-17 - fConst43) * fConst0) + 5.3124098855811003e-16);
	fConst50 = (((fConst45 + -3.01860692036509e-19) * fConst0) + -4.4624243038881203e-18);
	fConst51 = ((4.9936652924462299e-21 - fConst47) * fConst0);
	fConst52 = (((fConst37 + -1.7921414749007699e-17) * fConst0) + -2.6562049427905501e-16);
	fConst53 = (((4.5279103805476396e-19 - fConst39) * fConst0) + -2.2312121519440601e-18);
	fConst54 = ((fConst41 + -7.4904979386693396e-21) * fConst0);
	fConst55 = (((1.7921414749007699e-17 - fConst31) * fConst0) + -2.6562049427905501e-16);
	fConst56 = (((fConst33 + -1.5093034601825501e-19) * fConst0) + 2.2312121519440601e-18);
	fConst57 = ((2.4968326462231101e-21 - fConst35) * fConst0);
	fConst58 = (7.3570467303906597e-29 * fConst0);
	fConst59 = ((((((((((-6.8595975574860696e-24 - fConst58) * fConst0) + -1.4222119302176201e-21) * fConst0) + 1.1133504658827999e-19) * fConst0) + 8.5694232063082098e-18) * fConst0) + 1.18754628666436e-16) * fConst0);
	fConst60 = (9.7242879238314906e-46 * fConst0);
	fConst61 = (((((((((((-1.4045271030735101e-28 - fConst60) * fConst0) + -3.15807630294633e-24) * fConst0) + -6.4750615702448399e-22) * fConst0) + 5.0633685736010001e-20) * fConst0) + 3.89586213338798e-18) * fConst0) + 5.3980119851066501e-17);
	fConst62 = (4.9188072112395302e-46 * fConst0);
	fConst63 = (((((((((((fConst62 + 7.1044770548682799e-29) * fConst0) + 1.59636681185305e-24) * fConst0) + 3.1412663913140199e-22) * fConst0) + -1.77017753825041e-20) * fConst0) + -6.3330444154699702e-19) * fConst0) + -7.1874710316507402e-19);
	fConst64 = (1.32426841147032e-28 * fConst0);
	fConst65 = ((((((((((fConst64 + 2.28653251916202e-24) * fConst0) + -4.26663579065286e-21) * fConst0) + -3.3400513976483899e-19) * fConst0) + 2.8564744021027398e-18) * fConst0) + 2.1375833159958499e-16) * fConst0);
	fConst66 = (2.9172863771494498e-45 * fConst0);
	fConst67 = (((((((((((fConst66 + 2.5281487855323199e-28) * fConst0) + 1.0526921009821099e-24) * fConst0) + -1.94251847107345e-21) * fConst0) + -1.5190105720802999e-19) * fConst0) + 1.29862071112933e-18) * fConst0) + 9.7164215731919695e-17);
	fConst68 = (1.4756421633718599e-45 * fConst0);
	fConst69 = (((((((((((-1.27880586987629e-28 - fConst68) * fConst0) + -5.3212227061768399e-25) * fConst0) + 9.4237991739420391e-22) * fConst0) + 5.3105326147512301e-20) * fConst0) + -2.1110148051566601e-19) * fConst0) + -1.29374478569713e-18);
	fConst70 = ((((((((((1.1432662595810099e-23 - fConst58) * fConst0) + 4.26663579065286e-21) * fConst0) + -3.3400513976483899e-19) * fConst0) + -1.4282372010513699e-17) * fConst0) + 1.18754628666436e-16) * fConst0);
	fConst71 = (4.8621439619157402e-45 * fConst0);
	fConst72 = (((((((((((-1.4045271030735101e-28 - fConst71) * fConst0) + 5.2634605049105601e-24) * fConst0) + 1.94251847107345e-21) * fConst0) + -1.5190105720802999e-19) * fConst0) + -6.4931035556466299e-18) * fConst0) + 5.3980119851066501e-17);
	fConst73 = (2.4594036056197699e-45 * fConst0);
	fConst74 = (((((((((((fConst73 + 7.1044770548682799e-29) * fConst0) + -2.6606113530884199e-24) * fConst0) + -9.4237991739420391e-22) * fConst0) + 5.3105326147512301e-20) * fConst0) + 1.0555074025783299e-18) * fConst0) + -7.1874710316507402e-19);
	fConst75 = ((((((((((-1.1432662595810099e-23 - fConst58) * fConst0) + 4.26663579065286e-21) * fConst0) + 3.3400513976483899e-19) * fConst0) + -1.4282372010513699e-17) * fConst0) + -1.18754628666436e-16) * fConst0);
	fConst76 = (((((((((((fConst71 + -1.4045271030735101e-28) * fConst0) + -5.2634605049105601e-24) * fConst0) + 1.94251847107345e-21) * fConst0) + 1.5190105720802999e-19) * fConst0) + -6.4931035556466299e-18) * fConst0) + -5.3980119851066501e-17);
	fConst77 = (((((((((((7.1044770548682799e-29 - fConst73) * fConst0) + 2.6606113530884199e-24) * fConst0) + -9.4237991739420391e-22) * fConst0) + -5.3105326147512301e-20) * fConst0) + 1.0555074025783299e-18) * fConst0) + 7.1874710316507402e-19);
	fConst78 = ((((((((((fConst64 + -2.28653251916202e-24) * fConst0) + -4.26663579065286e-21) * fConst0) + 3.3400513976483899e-19) * fConst0) + 2.8564744021027398e-18) * fConst0) + -2.1375833159958499e-16) * fConst0);
	fConst79 = (((((((((((2.5281487855323199e-28 - fConst66) * fConst0) + -1.0526921009821099e-24) * fConst0) + -1.94251847107345e-21) * fConst0) + 1.5190105720802999e-19) * fConst0) + 1.29862071112933e-18) * fConst0) + -9.7164215731919695e-17);
	fConst80 = (((((((((((fConst68 + -1.27880586987629e-28) * fConst0) + 5.3212227061768399e-25) * fConst0) + 9.4237991739420391e-22) * fConst0) + -5.3105326147512301e-20) * fConst0) + -2.1110148051566601e-19) * fConst0) + 1.29374478569713e-18);
	fConst81 = ((((((((((6.8595975574860696e-24 - fConst58) * fConst0) + -1.4222119302176201e-21) * fConst0) + -1.1133504658827999e-19) * fConst0) + 8.5694232063082098e-18) * fConst0) + -1.18754628666436e-16) * fConst0);
	fConst82 = (((((((((((fConst60 + -1.4045271030735101e-28) * fConst0) + 3.15807630294633e-24) * fConst0) + -6.4750615702448399e-22) * fConst0) + -5.0633685736010001e-20) * fConst0) + 3.89586213338798e-18) * fConst0) + -5.3980119851066501e-17);
	fConst83 = (((((((((((7.1044770548682799e-29 - fConst62) * fConst0) + -1.59636681185305e-24) * fConst0) + 3.1412663913140199e-22) * fConst0) + 1.77017753825041e-20) * fConst0) + -6.3330444154699702e-19) * fConst0) + 7.1874710316507402e-19);
	fConst84 = (1.4714093460781301e-29 * fConst0);
	fConst85 = ((((((((((fConst84 + -2.28653251916202e-24) * fConst0) + 1.4222119302176201e-21) * fConst0) + -1.1133504658827999e-19) * fConst0) + 2.8564744021027398e-18) * fConst0) + -2.3750925733287199e-17) * fConst0);
	fConst86 = (1.38918398911878e-46 * fConst0);
	fConst87 = (((((((((((2.8090542061470202e-29 - fConst86) * fConst0) + -1.0526921009821099e-24) * fConst0) + 6.4750615702448399e-22) * fConst0) + -5.0633685736010001e-20) * fConst0) + 1.29862071112933e-18) * fConst0) + -1.07960239702133e-17);
	fConst88 = (7.0268674446279002e-47 * fConst0);
	fConst89 = (((((((((((fConst88 + -1.42089541097366e-29) * fConst0) + 5.3212227061768399e-25) * fConst0) + -3.1412663913140199e-22) * fConst0) + 1.77017753825041e-20) * fConst0) + -2.1110148051566601e-19) * fConst0) + 1.4374942063301501e-19);
	fConst90 = ((((((((((fConst84 + 2.28653251916202e-24) * fConst0) + 1.4222119302176201e-21) * fConst0) + 1.1133504658827999e-19) * fConst0) + 2.8564744021027398e-18) * fConst0) + 2.3750925733287199e-17) * fConst0);
	fConst91 = (((((((((((fConst86 + 2.8090542061470202e-29) * fConst0) + 1.0526921009821099e-24) * fConst0) + 6.4750615702448399e-22) * fConst0) + 5.0633685736010001e-20) * fConst0) + 1.29862071112933e-18) * fConst0) + 1.07960239702133e-17);
	fConst92 = (((((((((((-1.42089541097366e-29 - fConst88) * fConst0) + -5.3212227061768399e-25) * fConst0) + -3.1412663913140199e-22) * fConst0) + -1.77017753825041e-20) * fConst0) + -2.1110148051566601e-19) * fConst0) + -1.4374942063301501e-19);
	fConst93 = (4.5358430874067304e-28 * fConst0);
	fConst94 = (((((((fConst93 + 4.2131867494969101e-23) * fConst0) + 4.8679541970320199e-22) * fConst0) + -4.2074643880681601e-21) * fConst0) + -1.39687987955463e-21);
	fConst95 = (8.1645175573321107e-28 * fConst0);
	fConst96 = (((((((-1.4043955831656401e-23 - fConst95) * fConst0) + 1.46038625910961e-21) * fConst0) + 1.26223931642045e-20) * fConst0) + -4.6562662651820899e-22);
	fConst97 = (((((((fConst93 + -7.0219779158281803e-23) * fConst0) + -1.46038625910961e-21) * fConst0) + 1.26223931642045e-20) * fConst0) + 2.3281331325910499e-21);
	fConst98 = (((((((fConst93 + 7.0219779158281803e-23) * fConst0) + -1.46038625910961e-21) * fConst0) + -1.26223931642045e-20) * fConst0) + 2.3281331325910499e-21);
	fConst99 = (((((((1.4043955831656401e-23 - fConst95) * fConst0) + 1.46038625910961e-21) * fConst0) + -1.26223931642045e-20) * fConst0) + -4.6562662651820899e-22);
	fConst100 = (((((((fConst93 + -4.2131867494969101e-23) * fConst0) + 4.8679541970320199e-22) * fConst0) + 4.2074643880681601e-21) * fConst0) + -1.39687987955463e-21);
	fConst101 = (((((((1.4043955831656401e-23 - fConst2) * fConst0) + -4.8679541970320199e-22) * fConst0) + 4.2074643880681601e-21) * fConst0) + -4.6562662651820899e-22);
	fVslider0 = FAUSTFLOAT(0.5);
	fVslider1 = FAUSTFLOAT(0.5);
	fVslider2 = FAUSTFLOAT(0.5);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, Dsp *p)
{
	p->init(samplingFreq);
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
		double fTemp0 = ((fConst0 * (fConst28 + (fRec4[0] * (fConst29 + (fConst30 * fRec4[0]))))) + 5.8427910017117405e-14);
		fRec3[0] = (double(input0[i]) - ((((((fRec3[1] * ((fConst0 * (fConst5 + (fRec4[0] * (fConst7 + (fConst9 * fRec4[0]))))) + 2.9213955008558699e-13)) + (fRec3[2] * ((fConst0 * (fConst11 + (fRec4[0] * (fConst13 + (fConst15 * fRec4[0]))))) + 5.8427910017117398e-13))) + (fRec3[3] * ((fConst0 * (fConst16 + (fRec4[0] * (fConst17 + (fConst18 * fRec4[0]))))) + 5.8427910017117398e-13))) + (fRec3[4] * ((fConst0 * (fConst19 + (fRec4[0] * (fConst20 + (fConst21 * fRec4[0]))))) + 2.9213955008558699e-13))) + (fRec3[5] * ((fConst0 * (fConst23 + (fRec4[0] * (fConst25 + (fConst27 * fRec4[0]))))) + 5.8427910017117405e-14))) / fTemp0));
		double fTemp1 = (fConst90 + ((fRec0[0] * ((fConst0 * (fConst91 + (fConst92 * fRec0[0]))) + 7.1874710316507404e-18)) + 1.5812436269631599e-17));
		fRec1[0] = ((0.29999999999999999 * double(orangetinyterror_p1aclip(double((fConst1 * ((fRec2[0] * ((((((fRec3[0] * (fConst32 + (fConst0 * (fRec4[0] * (fConst34 + (fConst36 * fRec4[0])))))) + (fRec3[1] * (fConst38 + (fConst0 * (fRec4[0] * (fConst40 + (fConst42 * fRec4[0]))))))) + (fRec3[2] * (fConst44 + (fConst0 * (fRec4[0] * (fConst46 + (fConst48 * fRec4[0]))))))) + (fRec3[3] * (fConst49 + (fConst0 * (fRec4[0] * (fConst50 + (fConst51 * fRec4[0]))))))) + (fRec3[4] * (fConst52 + (fConst0 * (fRec4[0] * (fConst53 + (fConst54 * fRec4[0]))))))) + (fRec3[5] * (fConst55 + (fConst0 * (fRec4[0] * (fConst56 + (fConst57 * fRec4[0])))))))) / fTemp0)))))) - ((((((((fRec1[1] * (fConst59 + ((fRec0[0] * ((fConst0 * (fConst61 + (fConst63 * fRec0[0]))) + 5.0312297221555203e-17)) + 1.10687053887421e-16))) + (fRec1[2] * (fConst65 + ((fRec0[0] * ((fConst0 * (fConst67 + (fConst69 * fRec0[0]))) + 1.50936891664666e-16)) + 3.3206116166226399e-16)))) + (fRec1[3] * (fConst70 + ((fRec0[0] * ((fConst0 * (fConst72 + (fConst74 * fRec0[0]))) + 2.5156148610777599e-16)) + 5.5343526943710696e-16)))) + (fRec1[4] * (fConst75 + ((fRec0[0] * ((fConst0 * (fConst76 + (fConst77 * fRec0[0]))) + 2.5156148610777599e-16)) + 5.5343526943710696e-16)))) + (fRec1[5] * (fConst78 + ((fRec0[0] * ((fConst0 * (fConst79 + (fConst80 * fRec0[0]))) + 1.50936891664666e-16)) + 3.3206116166226399e-16)))) + (fRec1[6] * (fConst81 + ((fRec0[0] * ((fConst0 * (fConst82 + (fConst83 * fRec0[0]))) + 5.0312297221555203e-17)) + 1.10687053887421e-16)))) + (fRec1[7] * (fConst85 + ((fRec0[0] * ((fConst0 * (fConst87 + (fConst89 * fRec0[0]))) + 7.1874710316507404e-18)) + 1.5812436269631599e-17)))) / fTemp1));
		double fTemp2 = (fConst1 * ((fRec0[0] * ((((((((fConst3 * fRec1[0]) + (fConst94 * fRec1[1])) + (fConst96 * fRec1[2])) + (fConst97 * fRec1[3])) + (fConst98 * fRec1[4])) + (fConst99 * fRec1[5])) + (fConst100 * fRec1[6])) + (fConst101 * fRec1[7]))) / fTemp1));
		output0[i] = FAUSTFLOAT((int(signbit(double(fTemp2)))?double(orangetinyterror_p2_negclip(double(fTemp2))):double(orangetinyterror_p2clip(double(fTemp2)))));
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
			fRec3[j0] = fRec3[(j0 - 1)];
		}
		for (int j1 = 7; (j1 > 0); j1 = (j1 - 1)) {
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
