BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, I'm finally done with the cash
register. Huh? Where's ｛本多＊＊｝......)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
BGOpen("ev003",0);
ChOpen(3,100,0,0,2,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛本多＊＊｝, are you still organizing the
bookshelf?");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,0);
VoicePlay("G110300503_03_000");
MsgDisp("Honda","No, I thought if I organized the books, 
it would sort out my mind too......
but it didn't help.");
MsgDisp("主人公","Eh......");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300503_03_010");
MsgDisp("Honda","Phew......
I've stopped organizing it now.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
BGOpen("ar600",0);
ChOpen(3,35,4,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("G110300503_03_020");
MsgDisp("Honda","Hey, I'm sorry for what I said to you at
work the other day. I was being reckless
and said some rash things.");
ChEye(3,2);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("G110300503_03_030");
MsgDisp("Honda","I was scolded by my little sister and my
Mom at home too.");
MsgDisp("主人公","Ehh∋　You talked about it at home?
That's embarrassing......");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,2,1);
VoicePlay("G110300503_03_040");
MsgDisp("Honda","Ehh.
That's how it was huh......");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("G110300503_03_050");
MsgDisp("Honda","Both of them said you're probably a bit 
embarrassed when you're with me.");
MsgDisp("主人公","But, you also have plenty of fun too,
right?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("G110300503_03_060");
MsgDisp("Honda","So...... The fun outweighs the
embarrassment right?");
MsgDisp("主人公","Hehe, of course!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("G110300503_03_070");
MsgDisp("Honda","Yaayー!");
VoicePlay("G110300503_42_000");
MsgDisp("Manager","You two! I told you that dating is
prohibited in the storeー.");
MsgDisp("主人公","(After all that,
Maybe the embarrassment is greater......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
