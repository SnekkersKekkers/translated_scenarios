ChEye(3,5);
ChMouth(3,4);
ChMotion(3,0,1);
ChCheek(3,10);
VoicePlay("T020320000_03_290");
MsgDisp("Honda","......! W-What does this mean?");
MsgDisp("主人公","It means I also like ｛本多＊＊｝.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("T020320000_03_300");
MsgDisp("Honda","Y-Yeah∋
I guess you could respond like that∋");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,1,1);
ChCheek(3,0);
VoicePlay("T020320000_03_310");
MsgDisp("Honda","I don't understand you at all.
I've realized that now.
It's worth studying you!");
MsgDisp("主人公","A-As for that......");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("T020320000_03_320");
MsgDisp("Honda","No.
Because with all these unexpected things,
it's just too much fun.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("T020320000_03_330");
MsgDisp("Honda","That's right, I have to tell Ryou-kun and
Mii-kun too.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("T020320000_03_340");
MsgDisp("Honda","Ah, but maybe it'll be okay for now......");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
Wait(60,0);
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
VoicePlay("T020320000_03_350");
MsgDisp("Honda","Haa......
Let's stay like this for a while.");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
