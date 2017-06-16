<?php
function u_print_r($subject, $ignore = array(), $depth = 1, $refChain = array())
{
    if ($depth > 20) return;
    if (is_object($subject)) {
        foreach ($refChain as $refVal)
            if ($refVal === $subject) {
                echo "*RECURSION*\n";
                return;
            }
        array_push($refChain, $subject);
        echo get_class($subject) . " Object ( \n";
        $subject = (array) $subject;
        foreach ($subject as $key => $val)
            if (is_array($ignore) && !in_array($key, $ignore, 1)) {
                echo str_repeat(" ", $depth * 4) . '[';
                if ($key{0} == "\0") {
                    $keyParts = explode("\0", $key);
                    echo $keyParts[2] . (($keyParts[1] == '*')  ? ':protected' : ':private');
                } else
                    echo $key;
                echo '] => ';
                u_print_r($val, $ignore, $depth + 1, $refChain);
            }
        echo str_repeat(" ", ($depth - 1) * 4) . ")\n";
        array_pop($refChain);
    } elseif (is_array($subject)) {
        echo "Array ( \n";
        foreach ($subject as $key => $val)
            if (is_array($ignore) && !in_array($key, $ignore, 1)) {
                echo str_repeat(" ", $depth * 4) . '[' . $key . '] => ';
                u_print_r($val, $ignore, $depth + 1, $refChain);
            }
        echo str_repeat(" ", ($depth - 1) * 4) . ")\n";
    } else
        echo $subject . "\n";
}
?>
<div class="r2r_bootstrap-user-register-form-wrapper">
<?php print render($form['account']); ?> <!-- includes username, email address, password, and password confirmation -->
<hr>
<h2>Account Information</h2>
<div class="row">
	<div class="col-md-6"><?php print render($form['field_first_name']); ?></div>
	<div class="col-md-6"><?php print render($form['field_last_name']); ?></div>
</div>
<div class="row">
	<div class="col-md-6"><?php print render($form['field_org_affill']); ?></div>
	<div class="col-md-6"><?php print render($form['field_org_type']); ?></div>
</div>
<div class="row">
	<div class="col-md-6"><?php print render($form['field_role']); ?></div>
	<div class="col-md-6"><?php print render($form['field_degrees']); ?></div>
</div>
<div class="row">
	<div class="col-md-6"><?php print render($form['field_bio']); ?></div>
	<div class="col-md-6">
		<?php print render($form['picture']); ?>
		<?php print render($form['field_user_picture']); ?>
	</div>
</div>
<div class="row">
	<div class="col-md-6"><?php print render($form['captcha']);?></div>
</div>


<?php print render($form['url']); /*<!-- honeypot -->*/ ?>
<?php print render($form['actions']); ?>
<?php print render($form['#validate']) ?>
<?php print drupal_render_children($form); /*<!--Just in case there's anything crucial left in the form variable -->*/ ?> 
</div>

