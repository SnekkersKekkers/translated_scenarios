BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_GAYA_016",0.5,0.5);
MsgDisp("主人公","......Huh?");
SEStop("EV_SE_GAYA_016",2);
MsgClose();
ScrFadeOut(0);
BGOpen("sc310",0);
SEPlay("EV_SE_619",0.2);
SEPlay("EV_SE_844",0.2,0.6);
ScrFadeIn(0);
VoicePlay("D010400500_40_000");
MsgDisp("Male Student A","Awesome......
This is seriously cool!");
VoicePlay("D010400500_41_010");
MsgDisp("Male Student B","Isn't it～
It's different when a model wears it.");
MsgDisp("主人公","(Ah...... It looks like the boys are
looking at the latest edition of Habatcher.)");
VoicePlay("D010400500_41_020");
MsgDisp("Male Student B","Nana really is cool huh～");
MsgDisp("主人公","！");
MsgClose();
SEStop("EV_SE_619",1);
SEStop("EV_SE_844",1);
ScrFadeOut(0);
BGMPlay("BGM_C04_NANA_C",0.01);
StlOpen("ev_04_06");
StlEye(4,0);
StlMouth(4,0);
ScrFadeIn(0);
VoicePlay("D010400500_40_030");
MsgDisp("Male Student A","Let me see, too.");
VoicePlay("D010400500_39_040");
MsgDisp("Male Student C","Oy, don't pull on the book!
You'll tear the Nana special edition∋");
MsgDisp("主人公","(Come to think of it, this month's issue
is on new items from \"Nana\".)");
StlMouthOpenLevel(4,0);
VoicePlay("D010400500_04_000");
MsgDisp("Nanatsumori","............");
VoicePlay("D010400500_40_050");
MsgDisp("Male Student A","Nana's even cool with guys.
Those clothes and accessories look really
good on him.");
VoicePlay("D010400500_39_060");
MsgDisp("Male Student C","It's because anything Nana wears ends up
looking cool, right?");
VoicePlay("D010400500_41_070");
MsgDisp("Male Student B","That's true～");
StlEyeOpenLevel(4,0);
VoicePlay("D010400500_04_010");
MsgDisp("Nanatsumori","............");
VoicePlay("D010400500_41_080");
MsgDisp("Male Student B","I feel the same way as you guys.
God is really cruel, huh～......");
VoicePlay("D010400500_39_090");
MsgDisp("Male Student C","Maybe you should try wearing the same
clothes as Nana.
You never know, it might surprise you?");
VoicePlay("D010400500_40_100");
MsgDisp("Male Student A","No way!
Our starting points are just way too
different!");
VoicePlay("D010400500_41_110");
MsgDisp("Male Student B","You don't have to tell me that!
Even if I put my mind to it——");
SEVol(0.7);
SEPlay("EV_SE_GAYA_016",0,0.3);
SEPlay("EV_SE_864",0,0.8);
MsgDisp("主人公","(Hehe!
Everyone is excited about \"Nana\")");
VoicePlay("D010400500_39_120");
MsgDisp("Male Student C","Hey, Nanatsumori.");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("D010400500_04_020");
MsgDisp("Nanatsumori","Eh?");
SEStop("EV_SE_GAYA_016",3);
SEStop("EV_SE_864",3);
MsgDisp("主人公","(！)");
VoicePlay("D010400500_39_130");
MsgDisp("Male Student C","You'd look good in this kind of thing,
right?");
VoicePlay("D010400500_41_140");
MsgDisp("Male Student B","Of course he would, he's tall.
I bet he'd look better if he took off his
glasses and changed his hairstyle?");
VoicePlay("D010400500_40_150");
MsgDisp("Male Student A","Ah, I see it!
He could really transform with a little
work!");
StlEye(4,0);
StlMouth(4,2);
VoicePlay("D010400500_04_030");
MsgDisp("Nanatsumori","No, no.
You know, I'm very......");
MsgDisp("主人公","(Hehe!)");
MsgClose();
ScrFadeOut(0);
StlClose();
SEPlay("EV_SE_GAYA_016",0.3,0.3);
SEPlay("EV_SE_864",0.3,0.8);
BGOpen("sc310",0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","｛七ツ森＊｝.");
MsgClose();
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
SEStop("EV_SE_GAYA_016",5);
SEStop("EV_SE_864",5);
VoicePlay("D010400500_04_040");
MsgDisp("Nanatsumori","Hmm?");
MsgDisp("主人公","Having fun?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400500_04_050");
MsgDisp("Nanatsumori","Yeah, it's interesting.
This kind of real-time search is really
exciting.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D010400500_04_060");
MsgDisp("Nanatsumori","I was surprised they involved me.");
MsgDisp("主人公","Real-time search, huh...... It's true that
it's popular with people around the same
age. School is a good place to see
everyone's reactions.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400500_04_070");
MsgDisp("Nanatsumori","Right. Just one of the few things I enjoy
about this place.");
MsgDisp("主人公","(Hehe. ｛七ツ森＊｝, I'm happy for
you!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
