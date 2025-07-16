MsgDisp("主人公","Me too......
I also really like ｛風真＊＊｝.");
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChCheek(1,10);
Wait(12,0);
ChEye(1,3);
ChMouth(1,2);
VoicePlay("T020111000_01_160");
MsgDisp("Kazama","......Is that so.");
MsgDisp("主人公","Yes, thank you for always thinking of me.
I'm sorry I don't remember everything.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("T020111000_01_170");
MsgDisp("Kazama","I was the one who was cowardly.
I lied to myself, and most of all, I was
rude to you.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
Wait(120,0);
StlOpen("ev_01_23");
ScrFadeIn(0);
VoicePlay("T020111000_01_180");
MsgDisp("Kazama","I'll never let you go again.");
VoiceEVSPlay(1);
VoicePlay("T020111000_01_190");
MsgDisp("Kazama","｛主人公｝, you are my
everything.
I love you.");
MsgClear();
StlEffect(1,1,60);
Wait(300,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(300,0);
