BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I messed up...even though it was the
last performance of my high school
life...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
VoicePlay("P540400005_04_000");
MsgDisp("Nanatsumori","Good work.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
I messed up even though it was the end...");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("P540400005_04_010");
MsgDisp("Nanatsumori","Well, they say life has it's ups and
downs.");
ChMotion(4,1,1);
VoicePlay("P540400005_04_020");
MsgDisp("Nanatsumori","After all, we're only students.");
MsgDisp("主人公","Yeah...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("P540400005_04_030");
MsgDisp("Nanatsumori","Look forwards.
Failure is the foundation of success,
right?");
MsgDisp("主人公","(｛七ツ森＊｝...Thank you. Even though it
was a fail in the end, I'm glad I
continued with the wind music club.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
