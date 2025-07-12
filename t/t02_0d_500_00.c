BGOpen("sc120",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("T020D50000_21_000");
MsgDisp("Michiru?","Wait.");
SEPlay("EV_SE_FOOT_WALK_COME_TWO",0,0.5);
SEWait();
BGMPlay("BGM_HANYOU_D",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
MsgDisp("主人公","Ah.
｛みちる＊｝, ｛ひかる＊｝!");
ChMotion(22,4,1);
VoicePlay("T020D50000_22_000");
MsgDisp("Hikaru","Congratulations on your graduation, Mari♪");
MsgDisp("主人公","Yes, congratulations on your graduation,
you guys...");
ChMotion(21,4);
VoicePlay("T020D50000_21_010");
MsgDisp("Michiru","Yeah. Now that it's ended, we
won't be walking home together?");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc000",0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
MsgDisp("主人公","...Huh?
Now that I think of it, this——");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("T020D50000_21_020");
MsgDisp("Michiru","Yeah.
This is the first time the three
of us have gone home together.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("T020D50000_22_010");
MsgDisp("Hikaru","Isn't that weird?∋
Even after three years at this school that
such a thing could happen? Aha▼");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("T020D50000_21_030");
MsgDisp("Michiru","...Hey, Mari do you remember the 
day we first met?");
MsgDisp("主人公","Ah... yes.
I feel like I was startled
by a lot of things to begin with.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("T020D50000_22_020");
MsgDisp("Hikaru","Right! But, still I'm really happy
you became friends with Hikaru!");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("T020D50000_21_040");
MsgDisp("Michiru","We started calling you \"Mari\" out of the
blue, and we had some unusual interactions
but you just accepted it, why?");
MsgDisp("主人公","Hehe!");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,4,1);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("T020D50000_21_050");
MsgDisp("Michiru","?");
MsgDisp("主人公","There were a lot of strange things
happening, yes... but ｛みちる＊｝ and
｛ひかる＊｝ were always my friends and
everyday was so fun!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("T020D50000_22_030");
MsgDisp("Hikaru","That goes for Hikaru too! 
I was so happy when it was the three of us
together, Marie, big sis and I!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("T020D50000_21_060");
MsgDisp("Michiru","Me too.
Because of Mari and Hikaru,
every day really shines...");
MsgDisp("主人公","Hehe. This is the first time you've
said something like that.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("T020D50000_22_040");
MsgDisp("Hikaru","...Why is that?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("T020D50000_21_070");
MsgDisp("Michiru","...Hmm.
I guess it's a little embarrassing.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("T020D50000_22_050");
MsgDisp("Hikaru","Hey, hey! I want to have more talks like
this! I feel like from now on I can say
anything!▼");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("T020D50000_21_080");
MsgDisp("Michiru","Yeah, me too.
Right now, I think I could even
confess to Mari. ");
MsgDisp("主人公","Eh-∋");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("T020D50000_22_060");
MsgDisp("Hikaru","Well then, let's have our last girl's
talk of high school at the coffee shop 
Haba High frequents.");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("T020D50000_21_090");
MsgDisp("Michiru","Agreed!");
MsgDisp("主人公","Me too!
Well, let's go together.");
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
BGMStop(2);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(21,0,30);
ChClose(22,0,30);
Wait(300,0);
