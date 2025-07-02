BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... that was a huge fail...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
VoicePlay("P540400001_04_000");
MsgDisp("Nanatsumori","You messed up, huh.");
MsgDisp("主人公","｛七ツ森＊｝... I failed.");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("P540400001_04_010");
MsgDisp("Nanatsumori","Looks like it.
You were the only one out of place.");
MsgDisp("主人公","Ughh....");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P540400001_04_020");
MsgDisp("Nanatsumori","Well, in a way it was a success?
I was so nervous I didn't 
have time to sleep.");
MsgDisp("主人公","(Ughh...
I should have practiced more...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
