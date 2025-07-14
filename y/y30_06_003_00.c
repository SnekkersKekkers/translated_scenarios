MsgType(3);
BGMPlay("BGM_C06_INORI_B",0.01);
BGOpen("ad630",0);
ScrFadeIn(0);
MsgDisp("","Today has been a continuation of
failures since morning.");
MsgDisp("","Absentmindedly, and being unable to
focus, I put the wrong shoes on,
tripped on a step, And wore my
outdoor shoes into school.");
MsgDisp("","Finally, In spite of me being in the
middle of the lesson I checked my
phone, And almost had it confiscated
by the teacher.");
MsgDisp("","I was already at my limit.");
MsgClear();
MsgDisp("","It had already been three whole days
since she left Habataki City.");
MsgDisp("","No matter how tightly scheduled the
school trip is, it would be nice to
hear from her at least once.");
MsgDisp("","I didn't have the leeway to take the
lack of communication as proof that
she was enjoying herself.");
MsgClear();
MsgDisp("","Even when she was still here, I would
feel a sudden sense of unease every
time she mentioned the school trip.");
MsgDisp("","Whenever she would talk about it
happily, that unease turned into
irritation. There were a few times
when I interrupted her too.");
MsgDisp("","Why are you so simple-minded? I...
won't be there.");
MsgClear();
MsgDisp("","But, thinking back on it now, I
should have gently listened to her
talk.");
MsgDisp("","If I had done that, maybe now she
would contact me during her school
trip.");
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClear();
BGOpen("ad631",0);
ScrFadeIn(0);
VoicePlay("Y300600300_06_000");
MsgDisp("Himuro","\"Haa...\"");
MsgDisp("","Before I realized, the third day of
the school trip was drawing to a
close.");
MsgDisp("","I think back to the schedule she was
talking about so happily. After they
finished sightseeing, it would
probably already be time for them to
go to bed.");
MsgClear();
MsgDisp("","Wanting some commonality with her,
even though she was far away, I got
into my bed at the same time.");
MsgDisp("","In my hand, was my phone.");
MsgDisp("","Even after going home, I wouldn't let
it go, constantly hoping that the
notification light would flash.");
MsgClear();
VoicePlay("Y300600300_06_010");
MsgDisp("Himuro","\"If I were to contact her now, how
would it go...\"");
MsgDisp("","That thought crossed my mind.
Maybe this is what they mean when
they talk about nighttime tension.");
MsgClear();
MsgDisp("","I was undecided, but first of all...
I opened her name in my contacts.");
MsgDisp("","If I lightly press this button once
more, I can connect with her, who is
at a distant place.");
VoicePlay("Y300600300_06_020");
MsgDisp("Himuro","\"Even though it's that simple...\"");
MsgClear();
MsgDisp("","Suddenly, when I thought of her
laughing happily with her classmates,
an intense rage arose.");
MsgDisp("","After talking so much about the
school trip to everyone, did she
forget about me?");
MsgDisp("","Give me a break!
I'll make sure she remembers.");
MsgClear();
MsgDisp("","Bedtime doesn't matter to me.
If it's really no good, she just
won't answer");
MsgDisp("","I pressed the screen displaying her
name with more force than necessary.");
SEPlay("SYS_SE_PHONE_CALL");
Wait(150,0);
SEStop("SYS_SE_PHONE_CALL",5);
SEWait();
MsgDisp("","Serves you right.
This is nighttime tension.");
BGMStop();
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgType(0);
