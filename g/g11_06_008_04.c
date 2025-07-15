BGOpen("ar200",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝. Are you already done for
the day?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,35,0,0,0,#1,#1,0,0);
VoicePlay("G110600804_06_000");
MsgDisp("Himuro","That's right, but.");
MsgDisp("主人公","Then, will you surf today?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("G110600804_06_010");
MsgDisp("Himuro","Want to take a trip?");
MsgDisp("主人公","Hehe, yeah!
Sorry to disturb.");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600804_06_020");
MsgDisp("Himuro","How long are you going to continue the
part time job?");
MsgDisp("主人公","I guess for as long as I can.
What about you, ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("G110600804_06_030");
MsgDisp("Himuro","I'm the same.");
MsgDisp("主人公","Then, shall we try to master the job
together?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,5);
VoicePlay("G110600804_06_040");
MsgDisp("Himuro","What? Will you work for Annalee in the
future?");
MsgDisp("主人公","I don't know.
But, it'll be very rewarding, right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600804_06_050");
MsgDisp("Himuro","Well, I guess.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600804_06_060");
MsgDisp("Himuro","If in the future, you can't find anything
you want to do, that would be okay too.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600804_06_070");
MsgDisp("Himuro","And one day we could have our own shop
together.");
MsgDisp("主人公","Eh?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
VoicePlay("G110600804_06_080");
MsgDisp("Himuro","You're going to master flowers aren't you?
Then, there'll be no one who's more
capable than you.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("G110600804_06_090");
MsgDisp("Himuro","I'd be in trouble if you went to a rival
shop, so I'll start headhunting you now.");
MsgDisp("主人公","Ah, so that's what you meant.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600804_06_100");
MsgDisp("Himuro","?
What did you think I meant?");
MsgDisp("主人公","No, it's nothing!");
MsgDisp("主人公","(Haa, my heart is fluttering......!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
