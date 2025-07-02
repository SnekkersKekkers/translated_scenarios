ChEyeOpenLevel(6,-1);
ChCheek(6,0);
BGMStop();
MsgDisp("主人公","I'm sorry...
I......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020611000_06_160");
MsgDisp("Himuro","Yeah... I know.");
MsgDisp("主人公","Huh?");
BGMPlay("BGM_C06_INORI_B",0.01);
Wait(40,0);
VoicePlay("T020611000_06_170");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","I've known all along.
So... I'm the one who's sorry.
I hurt you.");
MsgDisp("主人公","No, that's not...");
VoicePlay("T020611000_06_180");
ChEye(6,2);
ChMouth(6,3);
ChMotion(6,3);
MsgDisp("Himuro","Being nice to the very end, huh.");
VoicePlay("T020611000_06_190");
ChEye(6,4);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("Himuro","
Thanks to your help though, I could
reset myself. I went back to who I was
before we met.");
VoicePlay("T020611000_06_200");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,2);
MsgDisp("Himuro","Phew... It's a breath of fresh air.");
VoicePlay("T020611000_06_210");
ChEye(6,4);
ChMouth(6,0);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","
Though it seems that I won't be coming
to this sea for a while now...");
MsgDisp("主人公","｛氷室＊＊｝……");
VoiceEVSPlay(6);
VoicePlay("T020611000_06_220");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","｛主人公｝,
congratulations on your graduation.");
VoicePlay("T020611000_06_230");
ChEye(6,2);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","...... Goodbye.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(6,0,0);
Wait(120);
