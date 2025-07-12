MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020120202_01_000");
MsgDisp("Kazama","That's an amazing number of lights.");
MsgDisp("主人公","Yeah, I wonder how many there are?");
ChEye(1,0);
ChMouth(1,4);
ChMotion(1,1);
VoicePlay("G020120202_01_010");
MsgDisp("Kazama","I wonder?
It must be a huge number though.");
MsgDisp("主人公","It would be nice if each of them
found their partners.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120202_01_020");
MsgDisp("Kazama","Wouldn't it be impossible for each one?
But, I don't really know.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,9);
ChMouthOpenLevel(1,0);
VoicePlay("G020120202_01_030");
MsgDisp("Kazama","…………");
MsgDisp("主人公","｛風真＊＊｝?");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120202_01_040");
MsgDisp("Kazama","You know for those sorts of questions, 
that guy would probably answer properly.");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120202_01_050");
MsgDisp("Kazama","If it were Honda, he would satisfy your
curiosities.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120202_01_060");
MsgDisp("Kazama","I can't do that. ");
MsgDisp("主人公","I don't think anyone can do 
what ｛本多＊＊｝ does.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120202_01_070");
MsgDisp("Kazama","......Ahh, that's right.
That guy is a special case.");
MsgDisp("主人公","｛風真＊＊｝, what's wrong?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120202_01_080");
MsgDisp("Kazama","It's not that I want to embarrass myself
further.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120202_01_090");
MsgDisp("Kazama","It's just that I don't have as much
knowledge as him, and I can't talk as
interestingly.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120202_01_100");
MsgDisp("Kazama","And I don't plan on becoming a quiz king
or anything.");
MsgDisp("主人公","Yeah......?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120202_01_110");
MsgDisp("Kazama","I might be at a disadvantage now, but I'll
manage. I have a reason I can't back down.");
MsgDisp("主人公","(｛風真＊＊｝, So that's how you think of
｛本多＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
