BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I was able to give my best
performance at my last cultural festival.
I'm glad...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(2,254,0,0,4,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("P540200004_02_000");
MsgDisp("Sassa","｛主人公｝, that was amazing.");
MsgDisp("主人公","｛颯砂＊＊｝, thank you.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P540200004_02_010");
MsgDisp("Sassa","Whilst I was listening to you guys
perform, I thought back to many different
things from this last year.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P540200004_02_020");
MsgDisp("Sassa","Even the small things I had forgotten.
Thank you!");
MsgDisp("主人公","Hearing you say that makes me happy.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P540200004_02_030");
MsgDisp("Sassa","I'm sure it's not just me, 
I think all the students who heard 
that also thought so too.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P540200004_02_040");
MsgDisp("Sassa","I haven't seen you guys practicing, 
although the sound of it can be heard
from various places across the school.");
MsgDisp("主人公","Yeah...");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P540200004_02_050");
MsgDisp("Sassa","Without even realizing it, 
With this song and you guys' performance, 
I think everyone has become a fan.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P540200004_02_060");
MsgDisp("Sassa","Somewhat, music is amazing.");
MsgDisp("主人公","(Thank you, ｛颯砂＊＊｝...
I'm glad I gave it my all
these last three years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
