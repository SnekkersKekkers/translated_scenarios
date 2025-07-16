MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChNanaType(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B050400300_04_000");
MsgDisp("Nanatsumori","All things considered, this flea market
has a wide range of items.
I feel like I'm on an expedition.");
MsgDisp("主人公","What does that mean?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B050400300_04_010");
MsgDisp("Nanatsumori","Treasure hunting.");
MsgDisp("主人公","Hehe!
You end up being drawn to too many things
don't you?");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B050400300_04_020");
MsgDisp("Nanatsumori","Hmm....
That's not quite right.");
ChMotion(4,1,1);
VoicePlay("B050400300_04_030");
MsgDisp("Nanatsumori","It's that I haven't come across anything I
like.");
MsgDisp("主人公","I see...
What kid of thing are you looking for?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B050400300_04_040");
MsgDisp("Nanatsumori","A gothic lolita dress.");
MsgDisp("主人公","Hmm...");
MsgDisp("主人公","Eh∋");
ChMotion(4,1,1);
VoicePlay("B050400300_04_050");
MsgDisp("Nanatsumori","I want a black one.
Right, something with a lot of lace and a
big ribbon all over.");
MsgDisp("主人公","I-I see.
Maybe the dress over there is close to
that type?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400300_04_060");
MsgDisp("Nanatsumori","Oh!");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(4);
Wait(30,0);
SEPlay("EV_SE_576");
SEWait();
StlOpen("ev_04_05");
StlEye(4,1);
StlMouth(4,1);
BGMPlay("BGM_C04_NANA_C",0.01);
ScrFadeIn(0);
VoicePlay("B050400300_04_070");
MsgDisp("Nanatsumori","Right, right, this sort of thing.
You made a good find.");
MsgDisp("主人公","Y-Yeah.
But that...");
StlEye(4,0);
StlMouth(4,1);
VoicePlay("B050400300_04_080");
MsgDisp("Nanatsumori","It's a nice black.
And the high collar is cute too.");
MsgDisp("主人公","Yeah, it's cute but... these are women's
clothes?");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("B050400300_04_090");
MsgDisp("Nanatsumori","I know.");
MsgDisp("主人公","............");
StlEye(4,1);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
StlMouthOpenLevel(4,0);
VoicePlay("B050400300_04_100");
MsgDisp("Nanatsumori","............");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("B050400300_04_110");
MsgDisp("Nanatsumori","Shall I guess what you're thinking?");
StlEye(4,1);
StlMouth(4,1);
StlEyeOpenLevel(4,5,1);
VoicePlay("B050400300_04_120");
MsgDisp("Nanatsumori","I'm guessing it's \"Don't tell me you're
going to wear that∋
You like crossdressing\".");
MsgDisp("主人公","Uh...");
StlEyeOpenLevel(4,0,1);
StlMouthOpenLevel(4,0);
VoicePlay("B050400300_04_130");
MsgDisp("Nanatsumori","Hmmph.");
StlEyeOpenLevel(4,#1);
StlMouth(4,0);
StlMouthOpenLevel(4,#1);
VoicePlay("B050400300_04_140");
MsgDisp("Nanatsumori","Is that a problem?");
VoicePlay("B050400300_04_150");
MsgDisp("Nanatsumori","Even girls can be boyish and wear boy's
clothing.");
MsgDisp("主人公","Yeah.");
VoicePlay("B050400300_04_160");
MsgDisp("Nanatsumori","This is just the reverse of that.
And I don't generally wear it outside.");
MsgDisp("主人公","(...
Generally?)");
StlEye(4,0);
StlMouth(4,1);
VoicePlay("B050400300_04_170");
MsgDisp("Nanatsumori","Alright, I like this.
I'm buying it.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGOpen("fp700",1);
MsgClose();
ChNanaType(1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B050400300_04_180");
MsgDisp("Nanatsumori","Ahー, it's good that they're about to
close up shop.
It's easier to negotiate a lower priceー.");
MsgDisp("主人公","｛七ツ森＊｝ is good at
haggling huh?");
ChMotion(4,0,1);
VoicePlay("B050400300_04_190");
MsgDisp("Nanatsumori","That's cause there were a lot of good
things in that store that were too good to
be thrown away, so I ended up buying them.");
MsgDisp("主人公","Hehe.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B050400300_04_200");
MsgDisp("Nanatsumori","... Hey.
Have you been disillusioned?
By me, that is.");
MsgDisp("主人公","Nope.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400300_04_210");
MsgDisp("Nanatsumori","Right.
Even if it's a lie, I'm happy.
... Thank you.");
MsgDisp("主人公","I'm being for real?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B050400300_04_220");
MsgDisp("Nanatsumori","Yeah.
I believe it, because it's you.");
MsgDisp("主人公","｛七ツ森＊｝......");
MsgDisp("主人公","(But, I wonder if he'll show me how he
looks like crossdressing.
I think I kinda wanna see it...)");
ChPrmTblAdd(4,0);
