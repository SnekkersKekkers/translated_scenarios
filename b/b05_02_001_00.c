ChClose(2,0,0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(2,255,4,0,2,7,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050200100_02_000");
MsgDisp("Sassa","Sometimes even you want to come here.");
MsgDisp("主人公","Yeah.
It may be scary, but it's okay when I'm
with ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
ChCheek(2,10);
VoicePlay("B050200100_02_010");
MsgDisp("Sassa","When you say it like that, I guess
I have no choice.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
MsgDisp("主人公","W-Wait!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
SEWait();
MsgClose();
ScrFadeOut(0);
Wait(15,0);
BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_AMUSE_008",1,0.5);
Wait(80,0);
VoicePlay("B050200100_02_020");
MsgDisp("Sassa","Just look down at your feet.
Don't look at anything else.");
MsgDisp("主人公","Yeah.
I guess it won't be so scary this way.");
VoicePlay("B050200100_02_030");
MsgDisp("Sassa","Just like that.");
SEPlay("EV_SE_707");
SEStop("EV_SE_AMUSE_008",1);
MsgDisp("","(Foooー)");
VoicePlay("B050200100_02_040");
MsgDisp("Sassa","Uwaa∋");
MsgDisp("主人公","Kyaa!");
SEPlay("EV_SE_603");
SEWait();
Wait(60,0);
VoicePlay("B050200100_02_050");
MsgDisp("Sassa","That feeling......");
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_02");
StlEye(2,1);
StlMouth(2,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝!");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("B050200100_02_060");
MsgDisp("Sassa","What, just a hand?");
MsgDisp("主人公","EH∋
A hand? Where?");
StlEye(2,0);
StlMouth(2,0);
StlCheek(2,10);
VoicePlay("B050200100_02_070");
MsgDisp("Sassa","It wasn't a ghost, it was just your
hand.");
MsgDisp("主人公","Oh.
I was startled so I just......
Sorry.");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("B050200100_02_080");
MsgDisp("Sassa","No, stay like that.
Let's go slow.");
MsgDisp("主人公","O-Okay.
Thank you.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("B050200100_02_090");
MsgDisp("Sassa","......Maybe Haunted Houses are nice after
all?");
MsgDisp("主人公","Eh?");
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(50,0);
SEPlay("EV_SE_AMUSE_008",1,0.3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_707");
Wait(20,0);
MsgDisp("主人公","KYAA∈");
VoicePlay("B050200100_02_100");
MsgDisp("Sassa","Yeah, Haunted Houses are nice.");
SEStop("EV_SE_AMUSE_008",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Phew, that was scary......");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B050200100_02_110");
MsgDisp("Sassa","Well, there were a few good tricks.");
MsgDisp("主人公","That blowing sound was probably
the most surprising one.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,2);
ChCheek(2,10);
VoicePlay("B050200100_02_120");
MsgDisp("Sassa","......Yeah.
Yeah, for me too.");
MsgDisp("主人公","Holding onto ｛颯砂＊＊｝
while walking made me feel a bit better.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("B050200100_02_130");
MsgDisp("Sassa","Are you not scared anymore?");
MsgDisp("主人公","Eh, why?");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
ChCheek(2,10);
VoicePlay("B050200100_02_140");
MsgDisp("Sassa","Just saying. If you still feel scared,
hold onto me again, okay?");
MsgDisp("主人公","Uh, sure.");
MsgDisp("主人公","(......｛颯砂＊＊｝?)");
BGMStop();
ChPrmTblAdd(2,0);
