BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, let's check the guests
list...eh?
\"Hanatsubaki Goro\"?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,0,0,0,#1,#1,0,0);
VoicePlay("P833100000_31_000");
MsgDisp("Goro","Pardon the intrusion.");
MsgDisp("主人公","Goro-sensei∋");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,4);
VoicePlay("P833100000_31_010");
MsgDisp("Goro","Ah, it's you! I have to express my
gratitude for inviting me to the cultural
festival♪ COuld you show me around?");
MsgDisp("主人公","Yes, the student council committee will be
honoured to assist you!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("P833100000_31_020");
MsgDisp("Goro","Then, let's go off at once.");
MsgClose();
ScrFadeOut(0);
