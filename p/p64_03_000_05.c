ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("P640300005_03_000");
MsgDisp("Honda","｛主人公｝. Thank you for the meal.");
MsgDisp("主人公","｛本多＊＊｝, how was it?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P640300005_03_010");
MsgDisp("Honda","The vegetables you carefully grew, were
delicious.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("P640300005_03_020");
MsgDisp("Honda","But, the way you cut the vegetables
altered it's taste.
It's better to cut along the grain.");
MsgDisp("主人公","I-Is that right?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("P640300005_03_030");
MsgDisp("Honda","Yeah. The vegetables themselves are sweet
and delicious. I'll buy some to take home
as a souvenir.");
MsgDisp("主人公","(Haa... seems like I was neglectful in
researching preparation methods. I
failed.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGMStop();
