BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Should I head home soon...)");
VoiceEVSPlay(8);
VoicePlay("E010810000_08_000");
MsgDisp("Daichi?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛大地＊＊｝!");
VoicePlay("E010810000_08_010");
MsgDisp("Shirahane","What a coincidence.
Are you shopping too?");
MsgDisp("主人公","Yeah.
｛大地＊＊｝, is that food?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("E010810000_08_020");
MsgDisp("Shirahane","That's right. It's curry night! The
Shirahane family's special curry is
delicious～▼");
MsgDisp("主人公","Wow, that's great!
Now I'm getting hungry...");
ChEye(8,5);
ChMouth(8,5);
ChMotion(8,3,1);
SEPlay("EV_SE_017");
MsgDisp("","(Guuu～)");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010810000_08_030");
MsgDisp("Shirahane","Haha!
You really are hungry!");
MsgDisp("主人公","Ugh...");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,2,1);
ChCheek(8,5);
VoicePlay("E010810000_08_040");
MsgDisp("Shirahane","Then...would you like to come over to my
place and eat?");
MsgDisp("主人公","...Eh?");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,4,1);
ChCheek(8,7);
VoicePlay("E010810000_08_050");
MsgDisp("Shirahane","Oh gosh!
I said something really strange just now.");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010810000_08_060");
MsgDisp("Shirahane","It's getting late so be careful going
home. A delicious dinner awaits you. See
ya!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(8,0,30);
MsgDisp("主人公","(I was surprised...
But I'm curious to try the Shirahane
family's special curry.)");
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
