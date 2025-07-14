MsgType(3);
BGOpen("ad250",0);
BGMPlay("BGM_C02_SASSA_I",0.01);
ScrFadeIn(0);
SEPlay("EV_SE_769",0,0.8);
MsgDisp("","(Arf! Arf!)");
SEStop("EV_SE_769");
SEPlay("EV_SE_770",0,0.9);
Wait(80,0);
SEStop("EV_SE_770",3);
VoicePlay("Y300200500_02_000");
MsgDisp("Sassa","\"That's why I told you not to go over
there so much, You'll just get
drenched again.\"");
MsgClear();
MsgDisp("","I've continued training on the sand
since graduation. I also got a part
time job to run with dogs.");
MsgDisp("","But, It's different to when I was in
Haba High...");
SEStop("EV_SE_679");
MsgClear();
MsgDisp("主人公","\"Hehe! It looks like they caused
trouble for ｛颯砂＊＊｝
intentionally?\"");
MsgDisp("","｛主人公名前｝. We have another member
now.");
MsgDisp("","At first the dogs tilted their heads
confusedly at her, as if saying
\"Huh?\", But it's gotten to the point
where they listen to her more than
me.");
MsgClear();
VoicePlay("Y300200500_02_010");
MsgDisp("Sassa","\"Recently, doesn't it feel like they
listen to you more?\"");
MsgDisp("","She laughs, but dogs are sensitive to
the pecking order within their pack.");
MsgDisp("","...Seems like I'm below her.");
MsgClear();
MsgDisp("主人公","\"Hey, ｛颯砂＊＊｝. One more round?
Beach dash!\"");
MsgDisp("","With this, surely my rank is bellow
her.");
MsgClear();
VoicePlay("Y300200500_02_020");
MsgDisp("Sassa","\"Let's go!\"");
MsgDisp("","There's a mark 200 meters ahead on
the beach. The training involves
turning back there and sprinting back
with full effort.");
MsgDisp("主人公","\"Reaーdy——\"\"");
SEPlay("EV_SE_553");
MsgDisp("","(Go!)");
SEPlay("EV_SE_580",0,0.9);
Wait(18,0);
SEPlay("EV_SE_580",0,0.8);
MsgClear();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEWait();
MsgDisp("","Haa, haa, haa, haa..
The turnaround point is coming into
view.");
VoicePlay("Y300200500_02_030");
MsgDisp("Sassa","\"Alright, turn around!
...hm?\"");
MsgDisp("","Over there, there's a message she
wrote in the sand.");
MsgClear();
MsgDisp("","——\"Do your best▼\".");
MsgClear();
VoicePlay("Y300200500_02_040");
MsgDisp("Sassa","\"Ohh, I'm fired up!\"");
MsgDisp("","The dogs that had been running around
playing with me, as if inspired by my
earnest shout, ran straight for the
finish line.");
MsgDisp("","I can't possibly keep up with them,
but with such a message——");
MsgClear();
MsgDisp("","Waving at me, the smile I love so
much is getting closer.");
MsgDisp("","She's shining brightly in the morning
sun...");
VoicePlay("Y300200500_02_050");
MsgDisp("Sassa","\"Alriーght, I'll run along and hug
her.
Wait for me...!\"\"");
MsgClear();
SEPlay("EV_SE_679");
MsgDisp("","(Arf! Arf!)
(Arf Arf!)");
MsgDisp("","...Ah, they got to hug 
her before me.");
SEStop("EV_SE_679");
BGMStop();
MsgClear();
MsgClose();
ScrFadeOut(0,0);
MsgType(0);
