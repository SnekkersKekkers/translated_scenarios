BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
Seems like my first performance was a
success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
VoicePlay("P540400000_04_000");
MsgDisp("Nanatsumori","Good work.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
It went well!");
VoicePlay("P540400000_04_010");
MsgDisp("Nanatsumori","I saw.
Because I didn't get sleepy.");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P540400000_04_020");
MsgDisp("Nanatsumori","Well, I get sleepy at classical music.
But the performance just now was so moving
that I got goosebumps.");
MsgDisp("主人公","(Yay!
Seems like I got some results!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
