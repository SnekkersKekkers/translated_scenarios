BGMStop(1.7);
Wait(100,0);
BGOpen("sc770",2);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(And so, the last Christmas party of my
high school life is over...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,34,0,0,0,#1,#1,0,0);
MsgDisp("主人公","(Ah...
It's ｛氷室＊＊｝.)");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("R080600000_06_000");
MsgDisp("Himuro","......");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","(Huh?
That's not the way to his house.
And he's acting strange...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.4);
BGMStop();
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(｛氷室＊＊｝, where on earth did you go?
He should be here somewhere...
Ah.)");
MsgClose();
ChLayout(1);
ChClose(6,0,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
StlOpen("ev_06_15");
StlEye(6,2);
StlMouth(6,2);
StlEyeOpenLevel(6,0,1);
ScrFadeIn(0);
VoicePlay("R080600000_06_010");
MsgDisp("Himuro","......");
MsgDisp("主人公","(...｛氷室＊＊｝? It looks like he is
praying...I shouldn't interrupt him.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
Wait(50,0);
SEStop("EV_SE_FOOT_WALK_AWAY_ALONE",0.1);
SEPlay("EV_SE_697",0,0.6);
MsgDisp("","(Crunch)");
StlEye(6,2);
StlMouth(6,2);
MsgDisp("主人公","(Ah, I stepped on a branch∋)");
StlEye(6,0);
StlMouth(6,1);
VoicePlay("R080600000_06_020");
MsgDisp("Himuro","What are you doing?");
MsgDisp("主人公","Ah...
｛氷室＊＊｝, that's what I need to ask you.
Are you praying?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("R080600000_06_030");
MsgDisp("Himuro","What the heck?
I'd understand if we were in a church, but
aren't we outside?");
MsgDisp("主人公","Then what were you doing?");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("R080600000_06_040");
MsgDisp("Himuro","Escaping from reality.
I know, it's nonsense.");
StlEye(6,2);
StlMouth(6,0);
VoicePlay("R080600000_06_050");
MsgDisp("Himuro","When I saw you at the party...
It felt like the finale was here.");
MsgDisp("主人公","The finale...");
StlEye(6,2);
StlMouth(6,0);
VoicePlay("R080600000_06_060");
MsgDisp("Himuro","But surely, you thought about it too?
That today is our last Christmas party at
Habataki High.");
StlEye(6,2);
StlMouth(6,0);
VoicePlay("R080600000_06_070");
MsgDisp("Himuro","Did you have fun?");
MsgDisp("主人公","...｛氷室＊＊｝, did you?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("R080600000_06_080");
MsgDisp("Himuro","You're asking me that?");
StlEye(6,2);
StlMouth(6,0);
VoicePlay("R080600000_06_090");
MsgDisp("Himuro","Well, it wasn't all that bad.
I was able to exchange gifts with you, and
I made nice memories.");
StlEye(6,1);
StlMouth(6,2);
VoicePlay("R080600000_06_100");
MsgDisp("Himuro","...That's probably why it's been so hard.");
MsgDisp("主人公","Huh?");
StlEye(6,2);
StlMouth(6,2);
VoicePlay("R080600000_06_110");
MsgDisp("Himuro","Unlike you, I have another Christmas
party, next year.");
StlEye(6,2,0);
StlMouth(6,2);
StlEyeOpenLevel(6,0,1);
VoicePlay("R080600000_06_120");
MsgDisp("Himuro","I wish that I could enjoy it like I did
this year's, but I know that's impossible.");
MsgDisp("主人公","You can't say that for sure, can you?");
StlEye(6,2);
StlMouth(6,1);
VoicePlay("R080600000_06_130");
MsgDisp("Himuro","I am very sure.
You won't be there.
That's why.");
MsgDisp("主人公","Ah...");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("R080600000_06_140");
MsgDisp("Himuro","Haha, you look troubled.");
MsgDisp("主人公","Not at all. I'm glad I was able to hear
how you feel, ｛氷室＊＊｝. Thank you.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("R080600000_06_150");
MsgDisp("Himuro","You thanking me is kind of ironic.
...But hey, that's fine.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("R080600000_06_160");
MsgDisp("Himuro","I feel like I was able to make a lot of
memories with you in this last Habataki
party. So I should be saying...Thanks.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("R080600000_06_170");
MsgDisp("Himuro","And...
Merry Christmas.
Just wanted to let you know.");
MsgDisp("主人公","Hehe, yeah.
Merry Christmas, ｛氷室＊＊｝!");
BGMStop(3);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And just like that, the last Christmas
Eve party of my high school life is
over...)");
MsgClose();
ChPrmTblAdd(6,0);
