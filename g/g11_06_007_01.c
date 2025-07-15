BGOpen("sc500",1);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgClose();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("G110600701_06_000");
MsgDisp("Himuro","Hey.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝. Are you on your way home?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("G110600701_06_010");
MsgDisp("Himuro","Yeah. I'm gonna go by the ocean, want to
come?");
MsgDisp("主人公","Yeah, for sure!");
SEStop("EV_SE_SCHOOL_002",2);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
ChOpen(6,100,2,0,0,#1,#1,0,0);
BGMPlay("BGM_C06_INORI_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","｛氷室＊＊｝, are you going to participate
in more surfing exhibitions?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600701_06_020");
MsgDisp("Himuro","Yeah... come to think of it, you also came
to see me last time.");
MsgDisp("主人公","Yeah.
You were really cool!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,10);
VoicePlay("G110600701_06_030");
MsgDisp("Himuro","...Thanks.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600701_06_040");
MsgDisp("Himuro","Well, if me participating in events make
it more exciting, then I'll participate
more often.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600701_06_050");
MsgDisp("Himuro","I also want to thank the chairman.");
MsgDisp("主人公","The chairman...");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600701_06_060");
MsgDisp("Himuro","The organizer of the event.
He's also the store chairman.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600701_06_070");
MsgDisp("Himuro","He's also the person who invited me to
surf.");
MsgDisp("主人公","Woah... that's so cool!");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600701_06_080");
MsgDisp("Himuro","Yeah. I wouldn't be where I am now without
him. I would be a completely different
person without surfing.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
VoicePlay("G110600701_06_090");
MsgDisp("Himuro","I'm really grateful for that.");
MsgDisp("主人公","(｛氷室＊＊｝ feels indebted to the shop
chairman...
that's wonderful.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
