SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Ah, yes?");
MsgClose();
VoicePlay("M010700000_07_000");
MsgDisp("Mikage","S'me.");
MsgDisp("主人公","Eeh?!∈ ｛御影＊＊｝, what happened?!");
VoicePlay("M010700000_07_010");
MsgDisp("Mikage","Hey, don't be so loud.");
VoicePlay("M010700000_07_020");
MsgDisp("Mikage","Just now I heard about it from your mom.
Don't force yourself, heal up right.
Later.");
MsgDisp("主人公","Ah, ｛御影＊＊｝, please waii——Ahhh!");
ScrQuake(1);
VoicePlay("M010700000_07_030");
MsgDisp("Mikage","Hey, you alright∋");
SEPlay("EV_SE_DOOR_007");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,254,0,2,4,#1,#1,0,0);
VoicePlay("M010700000_07_040");
MsgDisp("Mikage","What happened?");
MsgDisp("主人公","When I tried to stand up, I suddenly went
limp and...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("M010700000_07_050");
MsgDisp("Mikage","Still not done recovering.
Don't go stomping around, go to bed.");
MsgDisp("主人公","Yes...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("M010700000_07_060");
MsgDisp("Mikage","Listen? I love how you put your all into
everything. But you know, there's a
difference between doing your best and
overdoing it.");
MsgDisp("主人公","Yes...
I understand.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("M010700000_07_070");
MsgDisp("Mikage","Then, I'll be waiting in class.");
MsgDisp("主人公","Yes!
Thank you very much for coming.");
MsgClose();
SEPlay("EV_SE_690",0,0.5);
BGMStop();
MsgClose();
ChClose(7);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
MsgDisp("主人公","(｛御影＊＊｝ came for a get well visit...
Okay, I have to get better fast!)");
