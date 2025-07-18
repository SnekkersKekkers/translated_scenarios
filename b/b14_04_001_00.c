BGOpen("ex290",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChLayout(1);
BGMPlay("BGM_XMAS_TRHEE",0.01);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Waa, pretty...!");
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B140400100_04_000");
MsgDisp("Nanatsumori","Yeah.
It's particularly beautiful this year.");
MsgDisp("主人公","Particularly?");
ChMotion(4,0,1);
VoicePlay("B140400100_04_010");
MsgDisp("Nanatsumori","Yeah.");
ChEye(4,2);
ChMouth(4,4);
ChCheek(4,3);
VoicePlay("B140400100_04_020");
MsgDisp("Nanatsumori","Haven't you noticed?
Or...are you not interested?");
MsgDisp("主人公","Ummm...");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("B140400100_04_030");
MsgDisp("Nanatsumori","Oh dear, do you have to think about it?");
ChMouth(4,0);
VoicePlay("B140400100_04_040");
MsgDisp("Nanatsumori","When was the last time we met?");
MsgDisp("主人公","Yesterday's Christmas party-...Ah! Oh,
we've spent both Christmas nights
together!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,5);
VoicePlay("B140400100_04_050");
MsgDisp("Nanatsumori","Yes, correct.
Here's a Christmas present as a reward.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(0);
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,5,0);
ScrFadeIn(0);
VoicePlay("B140400100_04_060");
MsgDisp("Nanatsumori","Merry Christmas～");
MsgDisp("主人公","Ah...");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_505");
MsgDisp("","*Smooch*");
MsgClose();
ChClose(4,0,30);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,255,0,4,3,#1,#1,8,0,0,30);
ScrFadeIn(0);
MsgDisp("主人公","｛七ツ森＊｝, just now, on
my forehead...");
VoicePlay("B140400100_04_070");
MsgDisp("Nanatsumori","A kiss-mas present.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
ChCheek(4,10);
VoicePlay("B140400100_04_080");
MsgDisp("Nanatsumori","Unless I got the wrong idea, I thought it
would be the best present for both of us.");
MsgDisp("主人公","｛七ツ森＊｝...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("B140400100_04_090");
MsgDisp("Nanatsumori","｛主人公｝.
Thank you for spending today with me.");
ChMotion(4,3,1);
VoicePlay("B140400100_04_100");
MsgDisp("Nanatsumori","For the first time in my life, I was able
to experience what it was like to be
overflowing with happiness and overcome
with emotion on this day.");
MsgDisp("主人公","Yeah...");
ChMotion(4,0,1);
VoicePlay("B140400100_04_110");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","Once more. So that I don't forget this
moment for the rest of my life. Merry
Christmas, ｛主人公｝.");
MsgDisp("主人公","Merry Christmas,
｛七ツ森＊｝.");
MsgDisp("主人公","(I think I'm feeling happy too...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
