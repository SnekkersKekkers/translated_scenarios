SEPlay("EV_SE_700");
BGOpen("sc815",2);
ChLayout(1);
MsgClose();
ChOpen(1,30,0,2,0,0,#1,0,0);
ScrFadeIn(0);
VoicePlay("Q260100000_01_000");
MsgDisp("Kazama","Phew...");
MsgDisp("主人公","Eh, ｛風真＊＊｝∋");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("Q260100000_01_010");
MsgDisp("Kazama","You didn't realise, did you?");
MsgDisp("主人公","So that was ｛風真＊＊｝ earlier?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,7);
VoicePlay("Q260100000_01_020");
MsgDisp("Kazama","If it was anyone other than me, that'd be
upsetting.
...Geez.");
MsgDisp("主人公","(I see...
Then the person I felt earlier was...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
