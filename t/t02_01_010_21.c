ChEye(1,5);
ChMouth(1,2);
ChCheek(1,8);
Wait(60,0);
VoicePlay("T020101000_01_340");
MsgDisp("Kazama","...A promise kiss.");
ChEye(1,4);
MsgDisp("主人公","Yes, I also like ｛風真＊＊｝.
Thank you for always thinking of me.");
ChEye(1,4);
ChMouth(1,3);
ChEyeOpenLevel(1,0);
ChCheek(1,6);
VoicePlay("T020101000_01_350");
MsgDisp("Kazama","That wish really came true.");
MsgDisp("主人公","The pinwheel wish?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020101000_01_360");
MsgDisp("Kazama","Yeah.
It was because of this memory that I was
able to persevere even so far away.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("T020101000_01_380");
MsgDisp("Kazama","May we always be happy and healthy, and
may we get married.");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("T020101000_01_390");
MsgDisp("Ryota","I absolutely hope it can come true...");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,10);
VoicePlay("T020101000_01_400");
MsgDisp("Kazama","Absolutely, I hope so...");
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
StlOpen("ev_01_20");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_410");
MsgDisp("Kazama","...Ah, that's right. This. It looks
similar to your hair accessory doesn't it?");
MsgDisp("主人公","Wow, it's beautiful...!");
VoicePlay("T020101000_01_420");
MsgDisp("Kazama","I found and bought it when I was in
England.");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020101000_01_430");
MsgDisp("Kazama","——I promised to definitely give it to
you one day.");
MsgDisp("主人公","｛風真＊＊｝...
Thank you.");
StlEyeOpenLevel(1,0,1);
Wait(8,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020101000_01_440");
MsgDisp("Kazama","I'll put it on for you.");
BGMStop(5);
MsgClear();
ScrFadeOut(0,1);
StlClose();
SEPlay("EV_SE_694",0,0.7);
SEWait();
VoicePlay("T020101000_01_450");
MsgDisp("Kazama","Also...");
StlOpen("ev_01_22");
ScrFadeIn(0);
VoicePlay("T020101000_01_460");
MsgDisp("Kazama","This time I swear.");
MsgDisp("主人公","...Yes.");
VoicePlay("T020101000_01_470");
MsgDisp("Kazama","I'll never let you go again.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClear();
ScrFadeOut(0,1);
StlClose();
StlOpen("ev_01_21");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_480");
MsgDisp("Kazama","The bell has rung...!
Come on!");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020101000_01_490");
MsgDisp("Kazama","These are our wedding bells.");
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
