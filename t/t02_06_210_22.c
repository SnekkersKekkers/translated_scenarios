ChEyeOpenLevel(6,#1);
ChCheek(6,0);
ChEye(6,3);
ChMouth(6,1);
ChMotion(6,5);
VoicePlay("T020621000_06_280");
MsgDisp("Himuro","Woah∋");
VoicePlay("T020621000_06_290");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,4);
ChCheek(6,10);
MsgDisp("Himuro","
Just hugging people out of nowhere like
that... What are you thinking∋");
MsgDisp("主人公","
I just wanted to express how much I like
you with my whole body.");
VoicePlay("T020621000_06_300");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","What are you......");
VoicePlay("T020621000_06_310");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","So by all of what you
did until now, is that what you meant?");
VoicePlay("T020621000_06_320");
ChEye(6,0);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","
Like the two of us playing together and
then going back home together, we always
did that sort of thing.");
MsgDisp("主人公","Yes.");
VoicePlay("T020621000_06_330");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","∋");
VoicePlay("T020621000_06_340");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,0);
MsgDisp("Himuro","What? Hey...
Why do I feel like I've been holding
back a lot and lost out on some...");
MsgDisp("主人公","Huh?");
VoicePlay("T020621000_06_350");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","
Well, it's fine.
I wanted to hold it all in until this
moment came anyway.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020621000_06_360");
MsgDisp("Himuro","｛主人公｝, I love you.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
