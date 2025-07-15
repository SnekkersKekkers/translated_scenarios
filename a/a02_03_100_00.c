BGOpen("sc510",1);
ScrFadeIn(0);
MsgDisp("主人公","(I've been studying in the library and
didn't see time go by.
I should hurry back home......)");
VoicePlay("A020310000_03_000");
MsgDisp("Honda?","Investigation complete～!");
MsgDisp("主人公","(Eh? Looks like someone's still 
here.)");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C03_HONDA_I");
MsgClose();
ChOpen(3,254,5,5,5,#1,#1,0,0,0,30);
VoicePlay("A020310000_03_010");
MsgDisp("Honda?","Oh!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("A020310000_03_020");
MsgDisp("Honda?","—Oops! Sorry sorry! I scared you, right?
Are you alright?");
MsgDisp("主人公","I'm okay!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("A020310000_03_030");
MsgDisp("Honda?","......Ah, I'm Honda Iku.
And you are?");
MsgDisp("主人公","｛主人公姓名｝. ｛本多＊＊｝, is it? What
were you doing?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("A020310000_03_040");
MsgDisp("Honda","You wanna know?
Alright, I'll let you in on it.
Close your eyes for a sec.");
MsgDisp("主人公","What... Eh, okay.");
ScrFadeOut(3,30);
VoicePlay("A020310000_03_050");
MsgDisp("Honda","You are now in your classroom, sitting in
your seat.
Now, which way is the window?");
MsgDisp("主人公","On the left?");
VoicePlay("A020310000_03_060");
MsgDisp("Honda","Yes, correct! Now think back to your
primary school classrooms. Do you
remember?");
MsgDisp("主人公","Hmm......Oh!
It's always been on the left!");
ScrFadeIn(4,30);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("A020310000_03_070");
MsgDisp("Honda","Ding-ding-ding!
Right answer!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,2);
VoicePlay("A020310000_03_080");
MsgDisp("Honda","......or maybe not, I don't really know,
but classroom windows are basically
designed to be on the left side of the
room.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("A020310000_03_090");
MsgDisp("Honda","And I've confirmed it myself, each and
every classroom in Haba High too!");
MsgDisp("主人公","Amazing, I hadn't noticed at all!
But how come?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("A020310000_03_100");
MsgDisp("Honda","Mm-hm, it's because it's hard to see your
notebook when the shadow of your hand
holding your pen is coming from the right
side.");
MsgDisp("主人公","It was designed with the students in mind.
It's something so familiar, yet I didn't
notice at all.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("A020310000_03_110");
MsgDisp("Honda","That kind of awareness is the first step
towards knowledge!
See you then～!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(3);
SEWait();
VoicePlay("A020310000_03_120");
MsgDisp("Honda","Ah, but you know, I'm left-handed so it's
a little complicated～!");
MsgDisp("主人公","(Hehe, ｛本多＊＊｝, was it?......
He's a bit odd, but he's funny.)");
MsgClose();
ScrFadeOut(0);
