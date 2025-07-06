BGOpen("sc813",2);
EnvAutoSet(1);
ScrFadeIn(0);
SEPlay("EV_SE_737");
SEWait();
MsgClose();
ChOpen(7,254,0,0,0,-1,-1,0,0);
VoicePlay("Q010703200_07_000");
MsgDisp("Mikage","Alright, fun's over--!");
VoicePlay("Q010703200_42_000");
MsgDisp("Male Student","Crap, it's Mikage-sensei!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("Q010703200_07_010");
MsgDisp("Mikage","Don't waste your time resisting-");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("Q010703200_07_020");
MsgDisp("Mikage","I'll get in on this too～ ∈");
VoicePlay("Q010703200_38_000");
MsgDisp("Students","Awesome!
As expected of Mikagecchi! ∈");
VoicePlay("Q010703200_38_010");
MsgDisp("Students","Mikage-sensei, come join our team!");
SEPlay("EV_SE_737");
SEWait();
ChEye(7,5);
ChMouth(7,4);
ChMotion(7,4);
EnvStop();
EnvPlay("SE_ENV_BG_EV004_CO0");
VoicePlay("Q010703200_32_000");
MsgDisp("Vice Principal Himuro","Be quiet you all!
It's long past lights out!");
ChEye(7,5);
ChMouth(7,0);
VoicePlay("Q010703200_07_030");
MsgDisp("Mikage","Ah......");
VoicePlay("Q010703200_42_030");
MsgDisp("Male Student","Yikes, it's the vice principal!∈
Everyone, hide!");
SEPlay("EV_SE_739",0,0.6);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("主人公","(Wh-where should I hide?∋)");
MsgSel("Hide in the closet","Go under the duvet","Go under the table");
switch (MsgSelRsltGet()){
	case 0:
	SEPlay("EV_SE_516",0,1);
	SEWait();
	MsgDisp("主人公","(Wah-- There's someone inside the
closet!)");
	MsgDisp("主人公","(Who could it be...... It's too dark, I
can't see anything......)");
	MsgDisp("主人公","(Ooh, they're so close......
Teachers, please hurry up and leave! ∈)");
	VoicePlay("Q010703200_32_010");
	MsgDisp("Vice Principal Himuro","You all are high school students, do you
have no self awareness? Prepare for
tomorrow and go to sleep quickly.");
	VoicePlay("Q010703200_32_020");
	MsgDisp("Vice Principal Himuro","It seems Mikage
lacks self awareness as a teacher.
Come here!");
	VoicePlay("Q010703200_07_040");
	MsgDisp("Mikage","Y-Yes, sir.");
	SEPlay("EV_SE_738");
	SEWait();
	MsgDisp("主人公","(Phew, it seems like they left.
I've got to get out of here quickly!)");
	break ;
	case 1:
	SEPlay("EV_SE_629");
	SEWait();
	MsgDisp("主人公","(Wah～
There's someone in the futon!)");
	MsgDisp("主人公","(Aah, I'm sorry!
Right now, our bodies are touching...!)");
	MsgDisp("主人公","(You can hear my heart beating...
Teachers, please hurry up and leave! ∈)");
	VoicePlay("Q010703200_32_030");
	MsgDisp("Vice Principal Himuro","Good grief......
I have to give the same speech every year.
I want you to put yourselves in my shoes. ");
	VoicePlay("Q010703200_32_040");
	MsgDisp("Vice Principal Himuro","...And you. Mikage, I'd like to have a
good chat with you. Come here!");
	VoicePlay("Q010703200_07_050");
	MsgDisp("Mikage","Y-Yes, sir.");
	SEPlay("EV_SE_738");
	SEWait();
	MsgDisp("主人公","(Phew, it seems like they left.
I've got to quickly get out of here!)");
	break ;
	case 2:
	SEPlay("EV_SE_675");
	SEWait();
	MsgDisp("主人公","(Wah!
Someone's under the table!)");
	MsgDisp("主人公","(W-Who could it be...
They feel so close......)");
	MsgDisp("主人公","(Ooh, I can't move!
Teachers, please leave already～∈)");
	VoicePlay("Q010703200_32_050");
	MsgDisp("Vice Principal Himuro","Jeez......If they have this much energy,
they should use it to write a report. And
then--");
	VoicePlay("Q010703200_32_060");
	MsgDisp("Vice Principal Himuro","Mikage, I want you to come with me.");
	VoicePlay("Q010703200_07_060");
	MsgDisp("Mikage","Y-Yes.");
	SEPlay("EV_SE_738");
	SEWait();
	MsgDisp("主人公","(Ha... It seems they've left.
I have to get out of here quickly!)");
	break ;
	default :
	DbgAssert(0);
	break ;
	}
ChClose(7);
MsgClose();
