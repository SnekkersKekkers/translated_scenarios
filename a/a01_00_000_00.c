EnvAutoSet(0);
EnvPlay("SE_ENV_BG_PR001_CO0",1);
BGOpen("pr001",0);
BGMPlay("BGM_PROLOGUE",0.01);
SEPlay("EV_SE_766",1.5,0.3);
ScrFadeIn(0);
SEPlay("EV_SE_597",1,0.3);
Wait(180,1);
SEStop("EV_SE_766",5);
SEStop("EV_SE_597",3);
SEPlay("EV_SE_795",1,0.2);
Wait(120,1);
VoicePlay("A010000000_01_000");
MsgDisp("Ryota","Ah, listen, do you hear the bell?
It's ringing again!");
MsgDisp("主人公","Yeah... It's quiet, but I can hear it
too!");
SEStop("EV_SE_795",4);
VoicePlay("A010000000_01_010");
MsgDisp("Ryota","Right! I always hear it around here while
I'm on the way to school.");
MsgDisp("主人公","Oh, really?");
VoicePlay("A010000000_01_020");
MsgDisp("Ryota","Over here!
I think it's coming from this direction.
Come this way!");
SEPlay("EV_SE_FOOT_008",0,0.2);
Wait(5,0);
SEPlay("EV_SE_688",0,0.18);
MsgClose();
ScrFadeOut(0,1);
Wait(20,0);
BGOpen("pr002",0);
SEStop("EV_SE_FOOT_008",1);
SEStop("EV_SE_688",1);
SEPlay("EV_SE_765",0,0.4);
EnvPlay("SE_ENV_BG_PR002_CO0",1);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","Pant, pant...
Ryota, where are we going?");
VoicePlay("A010000000_01_030");
MsgDisp("Ryota","We're almost there!
It's just up ahead.
I'm sure that's where the bell is ringing.");
MsgDisp("Ryota","I've seen it before with my grandpa.");
SEPlay("EV_SE_FOOT_008",0,0.2);
Wait(5,0);
SEPlay("EV_SE_688",0,0.18);
MsgClose();
ScrFadeOut(0,1);
SEWait();
SEStop("EV_SE_795",1);
BGOpen("pr003",0);
EnvPlay("SE_ENV_BG_PR003_CO0",1);
ScrFadeIn(0);
VoicePlay("A010000000_01_040");
MsgDisp("Ryota","This is an old church.
They say it's been abandoned.");
MsgDisp("主人公","Oh...");
VoicePlay("A010000000_01_050");
MsgDisp("Ryota","Inside, you know, there's stained glass
from abroad, and a lot of antiques and
treasures.");
SEPlay("EV_SE_831",0,0.5);
Wait(138,0);
BGOpen("pr004",0);
VoicePlay("A010000000_01_060");
MsgDisp("Ryota","Do you think we can open the door?");
MsgDisp("主人公","Eh...
Are we allowed to do that?");
SEPlay("EV_SE_794",0,0.5);
SEWait();
VoicePlay("A010000000_01_070");
MsgDisp("Ryota","Ah...
I guess we can't after all.");
SEPlay("EV_SE_702",0.2,0.4);
Wait(140,0);
BGOpen("pr005",0);
SEPlay("EV_SE_828",0,0.5);
SEWait();
MsgDisp("主人公","Look, Ryota-kun.
We can see the inside of the church a
little bit from this window, see?");
MsgClose();
ScrFadeOut(0,0);
BGOpen("pr006",0);
EnvPlay("SE_ENV_BG_PR006_CO0",1);
ScrFadeIn(0);
VoicePlay("A010000000_01_080");
MsgDisp("Ryota","That sparkling picture. That's what they
call stained glass. And look, all the way
up at the top, do you see it?");
MsgClose();
ScrFadeOut(0,1);
BGOpen("pr007",0);
EnvPlay("SE_ENV_BG_PR007_CO0",1);
ScrFadeIn(0);
MsgDisp("主人公","Woah...! A big bell! Is this the one we
always hear ringing?");
VoicePlay("A010000000_01_090");
MsgDisp("Ryota","It has to be!
When it rings again, let's come take a
look!");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","Ever since we found the church bell,
whenever we heard the ringing, we would
always stop by. But it never rung again
after that—");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("pr008",0);
EnvPlay("SE_ENV_BG_PR007_CO0",1);
ScrFadeIn(0);
MsgDisp("主人公","Ryota-kun, the pinwheel you made today in
arts and crafts, it spins even better than
the teacher's!");
VoicePlay("A010000000_01_100");
MsgDisp("Ryota","I guess so.
Here, you can have it!");
SEPlay("EV_SE_552",0.4,0.1);
Wait(10,0);
BGOpen("pr009",0);
MsgDisp("主人公","Really, I can have it?");
VoicePlay("A010000000_01_110");
MsgDisp("Ryota","It's fine. In fact, I made it using the
same method as the pinwheels in the
treasure room at Habataki Castle.");
MsgDisp("主人公","...the treasure room pinwheels?");
VoicePlay("A010000000_01_120");
MsgDisp("Ryota","Yeah. It seems that they're castle
treasures, and orange like the setting
sun."); 
MsgDisp("Ryota","I heard that if you make a wish and blow
on it, anything can come true!");
MsgDisp("主人公","Wow! Like magic!");
VoicePlay("A010000000_01_130");
MsgDisp("Ryota","Since my pinwheel is made in the same way,
maybe if we make wishes they will also
come true?");
MsgDisp("主人公","Really?∋");
BGOpen("pr010",0);
VoicePlay("A010000000_01_140");
MsgDisp("Ryota","Let's try!
Alright, make a wish, and go puuu-!!");
MsgDisp("主人公","Eh?
O-Okay, I wish...");
VoicePlay("A010000000_01_150");
MsgDisp("Ryota","(I wish that we're always happy and
healthy and that we definitely, definitely
get married!)");
MsgDisp("主人公","(What to do, I can't think of a wish so
suddenly...)");
MsgDisp("主人公","(Ah, yeah!
\"I wish that Ryota-kun's wish will come
true!\")");
VoicePlay("A010000000_01_160");
MsgDisp("Ryota","Alright, let's blow!
Ready, go!");
ScrFadeOut(0,1);
BGMStop(4);
VoicePlay("A010000000_01_170");
MsgDisp("Together","PFuuu———sh!!");
MsgClose();
BGOpen("pr000",0);
SEPlay("EV_SE_597",0.3,0.1);
SEPlay("EV_SE_870",0,0.6);
ScrFadeIn(0);
Wait(60,0);
SEStop("EV_SE_870",2);
SEPlay("EV_SE_695");
Wait(120,1);
VoicePlay("A010000000_01_180");
MsgDisp("Ryota","The bell's ringing!");
MsgDisp("主人公","It really was this church's bell!
It's sounds like a wedding ceremony, don't
you think?");
SEVol(0.4,2);
MsgClose();
ScrFadeOut(0,1);
BGOpen("pr010",0);
ScrFadeIn(0);
VoicePlay("A010000000_01_190");
MsgDisp("Ryota","Eh! Well maybe, I guess that's true...?
...So what did you wish for?");
MsgDisp("主人公","My wish?...It's a secret.
It's embarrassing.");
VoicePlay("A010000000_01_200");
MsgDisp("Ryota","...I see.
Then mine is a secret too.
We probably wished for the same thing!");
MsgDisp("主人公","(The same wish...
I wished for Ryota-kun's wish to come
true, though?)");
SEStop("EV_SE_695",4);
MsgClose();
ScrFadeOut(0,0);
Wait(170,0);
SEPlay("JINGLE_019",5);
Wait(140,0);
BGOpen("ho410",2);
EnvPlay("SE_ENV_BG_EV004_CO0",1,0.5);
ScrFadeIn(4,60);
MsgDisp("主人公","That dream...");
MsgDisp("主人公","(Hehe, it's been a while since I've heard
his name. All the old memories are coming
back to me.)");
SEPlay("EV_SE_829",0,0.4);
SEStop("JINGLE_019",0);
SEWait();
MsgDisp("主人公","(That's right.
That very same \"Ryota\" is finally back...)");
SEPlay("EV_SE_629");
SEWait();
MsgDisp("主人公","Well, time to wake up and get ready!");
MsgClose();
EnvStop(3);
ScrFadeOut(0,1,120);
EnvAutoSet(1);
