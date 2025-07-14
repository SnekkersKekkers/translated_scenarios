BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hurray! I was able to give my best
performance in three years...!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("P540700004_07_000");
MsgDisp("Mikage","｛主人公｝.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P540700004_07_010");
MsgDisp("Mikage","Congratulations! That was an amazing
performance, huh?");
MsgDisp("主人公","Ah, ｛御影＊＊｝. It was a huge
success!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P540700004_07_020");
MsgDisp("Mikage","Yes, I got goosebumps.");
MsgDisp("主人公","Thank you very much...
Ughh...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P540700004_07_030");
MsgDisp("Mikage","Hey now, hey, 
why are you crying?");
MsgDisp("主人公","Somewhat... I'm filled with emotion...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P540700004_07_040");
MsgDisp("Mikage","I see... that joy is your reward for
working so hard. It will become a
wonderful memory.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P540700004_07_050");
MsgDisp("Mikage","Alright, after this, share that joy with
your friends.
...Good work these last three years.");
MsgClose();
ChClose(7,0,30);
ChLayout(0);
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,3,#1,#1,0,0,0,30);
Wait(60);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_682",0,0.6);
MsgDisp("","(*Pat pat*)");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
ScrFadeIn(0);
MsgDisp("主人公","...Yes!");
MsgDisp("主人公","(｛御影＊＊｝ patted my head...
I'm glad I devoted myself to club
activities the l;ast three years...!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChLayout(1);
