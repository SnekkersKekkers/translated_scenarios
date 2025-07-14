MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_KOKU",0.01);
ChNanaType(0);
ChOpen(4,40,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("T020401000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","｛七ツ森＊｝......");
ChEye(4,0);
ChMouth(4,4);
VoicePlay("T020401000_04_010");
MsgDisp("Nanatsumori","I'm glad you're here.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("T020401000_04_020");
MsgDisp("Nanatsumori","......You know the true legend of this
church, right?");
MsgDisp("主人公","I do.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020401000_04_030");
MsgDisp("Nanatsumori","The prince must overcome many challenges
to be united with the princess. After
that, they will pledge their love to each
other once again.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("T020401000_04_040");
MsgDisp("Nanatsumori","But......I didn't overcome these trials
for you like the prince in the legend.");
ChEye(4,4);
ChMouth(4,0);
VoicePlay("T020401000_04_050");
MsgDisp("Nanatsumori","On the contrary, I've forced a lot of
unnecessary things on you.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020401000_04_060");
MsgDisp("Nanatsumori","......I'm sorry");
MsgDisp("主人公","No, no.");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("T020401000_04_070");
MsgDisp("Nanatsumori","Really...... You were always so kind and
always dealt with my selfish requests and
troublesome matters with a smile.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020401000_04_080");
MsgDisp("Nanatsumori","Seriously.
Just how nice are you?");
MsgDisp("主人公","That......");
MsgClear();
ChClose(4);
ChCustomLayout(4,5,0,-2.8);
Wait(60);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,40,7,4,0,#1,#1,0,0,0,120);
VoicePlay("T020401000_04_090");
MsgDisp("Nanatsumori","I......");
ChEye(4,4);
ChMouth(4,0);
VoicePlay("T020401000_04_100");
MsgDisp("Nanatsumori","I love you.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020401000_04_110");
MsgDisp("Nanatsumori","Now, 
You've become the centre of my world.");
ChMotion(4,3,1);
VoiceEVSPlay(4);
VoicePlay("T020401000_04_120");
MsgDisp("Nanatsumori","｛主人公｝. Please go out with me.");
