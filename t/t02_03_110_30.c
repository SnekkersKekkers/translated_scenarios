BGMStop();
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgDisp("主人公","I'm sorry......");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,2,1);
VoicePlay("T020311000_03_210");
MsgDisp("Honda","Yes, I see.");
BGMPlay("BGM_C03_HONDA_C",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020311000_03_220");
MsgDisp("Honda","Thank you.
For accepting my feelings.");
MsgDisp("主人公","｛本多＊＊｝......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020311000_03_230");
MsgDisp("Honda","But the one thing I can devote my life to
is you.
That's the only thing that won't change.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("T020311000_03_240");
MsgDisp("Honda","I'll always wish for your happiness!");
ChEye(3,0);
ChEyeOpenLevel(3,10);
MsgDisp("主人公","｛本多＊＊｝...... Thank you......");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020311000_03_250");
MsgDisp("Honda","Hey, don't make that look. Look up. Even
if we're not together, let's do our best.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("T020311000_03_260");
MsgDisp("Honda","I'll be careful not to bury myself in
books again!
See you.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(3,0,0);
Wait(120);
