MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...even though it was my last
show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("P740200005_02_000");
MsgDisp("Sassa","｛主人公｝, did you sprain your
foot?");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝...
I'm fine, but I failed.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P740200005_02_010");
MsgDisp("Sassa","Well, if you fell you can't call it a
success, huh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P740200005_02_020");
MsgDisp("Sassa","But, the craftsmanship on that dress was
perfect, you know?");
MsgDisp("主人公","Yeah...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P740200005_02_030");
MsgDisp("Sassa","Then, you can try again someday with that
dress!");
MsgDisp("主人公","Someday...huh?
Will a day come where I'll wear that dress
again?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("P740200005_02_040");
MsgDisp("Sassa","It'll definitely come!");
MsgDisp("主人公","(｛颯砂＊＊｝...? But, I worked hard for
three years for this day, so I wanted to
make it a success...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
