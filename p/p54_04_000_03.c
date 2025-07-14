BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Maybe I didn't practice enough...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,2,4,#1,#1,0,0,0,60);
VoicePlay("P540400003_04_000");
MsgDisp("Nanatsumori","Hey, what's wrong?");
MsgDisp("主人公","｛七ツ森＊｝... I failed.");
VoicePlay("P540400003_04_010");
MsgDisp("Nanatsumori","I get you though. I didn't even know what
the original song was... that kind of
level, I guess?");
MsgDisp("主人公","Uughh...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P540400003_04_020");
MsgDisp("Nanatsumori","It seemed like a lot of people were
looking forward to it, so the venue was
buzzing.");
MsgDisp("主人公","(Haa... I should have practiced more
properly...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
