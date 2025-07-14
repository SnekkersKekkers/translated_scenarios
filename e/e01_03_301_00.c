BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Okay, I guess I should start heading home
now?)");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("E010330100_03_000");
MsgDisp("Honda","｛主人公｝, were you shopping?");
MsgDisp("主人公","Ah, ｛本多＊＊｝. Yeah, but I'm already on
my way home now. What about you?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("E010330100_03_010");
MsgDisp("Honda","Yeah, Yano-kun's shopping.
I'm just tagging along.");
MsgDisp("主人公","｛柊＊＊＊｝?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChPosition(3,1);
ChOpen(5,255,0,4,4,#1,#1,0,2);
VoicePlay("E010330100_05_000");
MsgDisp("Hiiragi","Honda-kun, thanks for waiting.");
MsgDisp("主人公","｛柊＊＊＊｝, good afternoon.
Were you shopping?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010330100_05_010");
MsgDisp("Hiiragi","Good afternoon. Yes, I was at a loss
because I had so many things to buy.
Honda-kun taught me an effective strategy.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("E010330100_03_020");
MsgDisp("Honda","Yep yep. Yano-kun has a lot of shopping to
do so the strategy will make a big
difference on how long it all takes.");
MsgDisp("主人公","That's true.
As expected of ｛本多＊＊｝.");
ChSet(3,0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("E010330100_05_020");
MsgDisp("Hiiragi","Yes, he was very helpful. It took one hour
less than I had planned. Thanks to him, I
think I can get something else.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010330100_05_030");
MsgDisp("Hiiragi","Thank you.
Well then, I will take my leave now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChPosition(3,0);
Wait(60,0);
MsgDisp("主人公","｛柊＊＊＊｝ always seems so busy......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010330100_03_030");
MsgDisp("Honda","Okay, next up is you.
How can we make your shopping more
efficient?");
MsgDisp("主人公","Eh?
But I'm already done for today.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("E010330100_03_040");
MsgDisp("Honda","Really? So I guess I should think about it
for the next time?");
MsgDisp("主人公","Ehh?
I haven't decided anything yet.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010330100_03_050");
MsgDisp("Honda","Really? Okay, feel free to tell me anytime
then. See you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Hmm, but I'd prefer to take my time when
it comes to choosing clothes and
accessories......)");
MsgClose();
ScrFadeOut(0,0);
