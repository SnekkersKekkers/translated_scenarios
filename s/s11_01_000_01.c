ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
SEPlay("EV_SE_836");
SEWait();
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("S110100001_01_000");
MsgDisp("Kazama","...");
MsgDisp("主人公","｛風真＊＊｝, what did you get?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("S110100001_01_010");
MsgDisp("Kazama","It says Very Good Luck.");
MsgDisp("主人公","Wow!
That's great.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("S110100001_01_030");
MsgDisp("Kazama","Wait a sec.
Everytime something good happens to me...
You're involved.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("S110100001_01_040");
MsgDisp("Kazama","The two of us can just share one fortune,
okay?");
MsgDisp("主人公","(I want to pick one too!)");
