ChEye(4,4);
ChMouth(4,4);
ChEye(4,5);
ChMouth(4,1);
ChMotion(4,5);
ChCheek(4,10);
VoicePlay("T020401000_04_260");
MsgDisp("Nanatsumori","Wai-...
Oi!");
MsgDisp("主人公","I've always liked
｛七ツ森＊｝ too.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
ChCheek(4,8);
VoicePlay("T020401000_04_270");
MsgDisp("Nanatsumori","......");
ChEye(4,2);
ChMotion(4,0,1);
ChMouthOpenLevel(4,#1);
VoicePlay("T020401000_04_280");
MsgDisp("Nanatsumori","Ah, I see...
You say cute things And your actions are
bold...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
ChCheek(4,0);
VoicePlay("T020401000_04_290");
MsgDisp("Nanatsumori","Wouldn't it have been better if you had
been the one to confess, instead of me?");
MsgDisp("主人公","Hehe!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020401000_04_300");
MsgDisp("Nanatsumori","No, not 'hehe'.
Come here.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
Wait(60,0);
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
VoicePlay("T020401000_04_310");
MsgDisp("Nanatsumori","I like you more ...so, do you
understand?");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
