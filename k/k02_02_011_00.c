BGMStop();
BGOpen("ho000",2);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("K020201100_02_000");
MsgDisp("Sassa","Yeah, but there's still more.
Something important.");
MsgDisp("主人公","Hm?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("K020201100_02_010");
MsgDisp("Sassa","Not \"Hm?\".
It's your special day.");
SEPlay("EV_SE_665");
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020201100_02_020");
MsgDisp("Sassa","Happy birthday.
Here's your present.");
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("K020201100_02_030");
MsgDisp("Sassa","I'm relieved.
I was thinking hard about the timing
the whole day today...... I'm tired.");
MsgDisp("主人公","Hehe, so that's what it was.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020201100_02_040");
MsgDisp("Sassa","Yeah. But you know,
I'm glad we spent a special day like
your birthday together.");
MsgDisp("主人公","Yeah, I'm glad too.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("K020201100_02_050");
MsgDisp("Sassa","Well, see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
Wait(30);
MsgDisp("主人公","(What a great birthday! I'm happy I got a
present from ｛颯砂＊＊｝.)");
MsgClose();
ScrFadeOut(0,0);
