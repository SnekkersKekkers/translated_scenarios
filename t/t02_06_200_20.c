ChEyeOpenLevel(6,-1);
ChCheek(6,0);
MsgDisp("主人公","I also......
want to be with ｛氷室＊＊｝.");
VoicePlay("T020620000_06_090");
ChEye(6,3);
ChMouth(6,0);
ChCheek(6,10);
MsgDisp("Himuro","…………");
VoicePlay("T020620000_06_100");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,2);
MsgDisp("Himuro","I see......
I'm glad, truly......");
VoicePlay("T020620000_06_110");
ChEye(6,4);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("Himuro","I was prepared for this all along......
That this might be the end");
VoicePlay("T020620000_06_120");
ChEye(6,4);
ChMouth(6,4);
ChMotion(6,4);
ChCheek(6,0);
MsgDisp("Himuro","Haa...... I have to give my thanks to
those guys too.");
VoicePlay("T020620000_06_130");
ChEye(6,4);
ChMouth(6,4);
MsgDisp("Himuro","It's pathetic but, I think they gave me
the push I needed.");
MsgDisp("主人公","Hehe, is that so?");
VoicePlay("T020620000_06_140");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
MsgDisp("Himuro","But if I don't tell them about this in
detail they'll just come and tease
me...... that would be be a real nuisance.");
MsgDisp("主人公","Hehe!");
VoicePlay("T020620000_06_150");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","So, just for now,
let me have that smile all to myself.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020620000_06_160");
MsgDisp("Himuro","Because I really love you, ｛主人公｝.");
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
