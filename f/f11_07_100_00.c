ChLayout(1);
BGOpen("sc710",0);
ScrFadeIn(0);
MsgClose();
ChOpen(7,37,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("F110710000_07_000");
MsgDisp("Mikage","｛主人公｝, are you enjoying the
festival?");
MsgDisp("主人公","Yes!
Oh, ｛御影＊＊｝, that
outfit...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F110710000_07_010");
MsgDisp("Mikage","Oh, it's because the gardening club left
the food stand to me.
I have my own exhibit, too.");
MsgDisp("主人公","Really?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F110710000_07_020");
MsgDisp("Mikage","The Mikage Mobile Zoo.
With full cooperation from the Habataki
mountain farmers.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("F110710000_07_030");
MsgDisp("Mikage","You too, come if you feel like it～!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
Wait(40);
VoicePlay("F110710000_07_040");
MsgDisp("Mikage","Miss, don't you want to have a go at
riding the pony?");
VoicePlay("F110710000_47_000");
MsgDisp("Woman Customer","Huh?
Is this horse riding?");
VoicePlay("F110710000_07_050");
MsgDisp("Mikage","That's right, with a cute pony.");
MsgDisp("主人公","(｛御影＊＊｝...somehow, that looks really
fun...)");
MsgClose();
ScrFadeOut(0,0);
