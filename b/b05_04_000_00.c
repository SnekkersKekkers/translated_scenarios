MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChLayout(1);
ChNanaType(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, this accessory is cute! They're
already coming out with summer line-up.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B050400000_04_000");
MsgDisp("Nanatsumori","Yeah.
They need to keep ahead of the season
in whatever way they can.");
MsgDisp("主人公","Right!
It's really cute...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400000_04_010");
MsgDisp("Nanatsumori","If you're interested, 
why not try it on?
I think it'll look good on you.");
MsgDisp("主人公","Really?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B050400000_04_020");
MsgDisp("Nanatsumori","Are you doubting me?");
MsgDisp("主人公","Hehe!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B050400000_47_000");
MsgDisp("Woman Customer A","Hey hey, over there.
Is that Nana?");
VoicePlay("B050400000_48_000");
MsgDisp("Woman Customer B","Eh, seriously?
Doesn't it look like he's with a girl?");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
VoicePlay("B050400000_47_010");
MsgDisp("Woman Customer A","Right!
Don't tell me that's his girlfriend∋");
MsgDisp("主人公","H-Hey, ｛七ツ森＊｝...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,4,1);
VoicePlay("B050400000_04_030");
MsgDisp("Nanatsumori","Shh.
Come here.
Now, give me your hand.");
MsgClose();
ChClose(4,0,30);
SEPlay("EV_SE_544");
ChLayout(0);
ChNanaType(1);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
MsgDisp("主人公","Hand?");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(4);
Wait(30,0);
StlOpen("ev_04_02");
StlEye(4,0);
StlMouth(4,0);
SEPlay("EV_SE_504");
SEWait();
BGMPlay("BGM_C04_NANA_B",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Ehh∋)");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("B050400000_04_040");
MsgDisp("Nanatsumori","Don't be scared. 
Look confident.");
MsgDisp("主人公","B-But...");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("B050400000_04_050");
MsgDisp("Nanatsumori","Don't look around.
...Look at me.");
MsgDisp("主人公","Y-Yeah.");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0,1);
VoicePlay("B050400000_48_010");
MsgDisp("Woman Customer B","Eh, seriously∋
They're super lovey-dovey!");
VoicePlay("B050400000_47_020");
MsgDisp("Woman Customer A","I don't believe it...
I mean that's really Nana isn't it.");
VoicePlay("B050400000_48_020");
MsgDisp("Woman Customer B","But it's kinda suspicious.
If he was the real deal, 
he wouldn't stand like thatー.");
VoicePlay("B050400000_47_030");
MsgDisp("Woman Customer A","Got it, he's Nana's fan!'
There are quite a lot of guys who copy 
Nana's hairstyle and fashion right?");
VoicePlay("B050400000_48_030");
MsgDisp("Woman Customer B","That's right.
Ahー That scared meー!");
MsgDisp("主人公","(I'm glad...
Looks like they didn't even 
discover it was \"Nana\". )");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("B050400000_04_060");
MsgDisp("Nanatsumori","Operation success.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
MsgClose();
BGOpen("wf100",0);
ChLayout(1);
ChNanaType(1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Haa...
My heart is racing...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B050400000_04_070");
MsgDisp("Nanatsumori","We somehow worked it out right?");
MsgDisp("主人公","Yeah.
Why was that I wonder?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400000_04_080");
MsgDisp("Nanatsumori","When humans come across a situation that 
is unfavorable for them, they can filter 
it out and make it disappear.");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("B050400000_04_090");
MsgDisp("Nanatsumori","Those two shared a filter that made 
them believe that \"Nana\" couldn't 
have a girlfriend.");
MsgDisp("主人公","I see.
I'm glad your true identity 
didn't get leaked.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B050400000_04_100");
MsgDisp("Nanatsumori","It's not good.");
MsgDisp("主人公","Eh?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400000_04_110");
MsgDisp("Nanatsumori","Next time you should match
my performance a bit more.");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("B050400000_04_120");
MsgDisp("Nanatsumori","If you're that nervous, 
I'll look unhinged.");
MsgDisp("主人公","Ah, sorry...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B050400000_04_130");
MsgDisp("Nanatsumori","I'm begging you.
Now let's continue shopping.");
MsgDisp("主人公","(...Hm?
He said \"next time\"...)");
ChPrmTblAdd(4,0);
